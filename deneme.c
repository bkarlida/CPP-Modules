#include <microshell.h>

int err(char *str)
{
    int i = 0;
    while (str[i])
        write(2, &str[i++], 1);
    return(1);
}

int cd(char **av, int i)
{
    if (i != 2)
        return(err("error: cd: bad arguments\n"));
    else if (chdir(av[1]) == -1)
        return err("error: cd: cannot change directory to "), err(av[1]), err("\n");
    return(0);
} 


int exec(char **av, int i, char **env)
{
    int fd[2];
    int status;
    int has_pipe = av[i] && !strcmp(av[i], "|");

    if (has_pipe && pipe(fd) == -1)
        return(err("error : fatal\n"));

    int pid = fork();
    if (!pid)
    {
        av[i] = 0;
        if (has_pipe && (dup2(fd[1], 1)  == -1 || close(fd[0]) || close(fd[1])))
            return err("error: fatal\n");
        execve(*av, av, env);
        return err("error: cannot execute "), err(*av), err("\n");        
    }
    waitpid(pid, &status, 0);
    if (has_pipe && (dup2(fd[0], 0) == -1 || close(fd[0]) || close(fd[1])))
            return err("error: fatal\n");
    return WIFEXITED(status) && WEXITSTATUS(status);    
}


int main(int ac, char **av , char **env)
{
    int i;
    int status;

    if (ac > 1)
    {
        while (av[i] && av[++i])
        {
            av += i;
            i = 0;
            while (av[i] && strcmp(av[i], "|") && strcmp(av[i], ";"))
                i++;
            if (!strcmp(av[i], "cd"))
                status = cd(av, i);
            else if (i)
                status = exec(av, env, i);
        }
    }
    return status;
}