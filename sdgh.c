#include "microshell.h"

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
		return err("err: cd: cannot change directory to "), err(av[1]), err("\n");
	return(0);
}

int exec(char **av ,int i, char **env)
{
	int status;
	int fd[2];
	int has_pipe = av[i] && !strcmp(av[i], "|");

	if (has_pipe && pipe(fd) == -1)
		return(err("error: fatal\n"));
	int pid = fork();
	if (!pid)
	{
		av[i] = 0;
		if (has_pipe && (dup2(fd[1], 1) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
			return(err("error: fatal\n"));
		execve(*av, av, env);
		return err("error: connot execute "), err(*av), err("\n");
	}		
	waitpid(pid, &status, 0);
	if (has_pipe && (dup2(fd[0], 0) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
			return(err("error: fatal\n"));
	return WIFEXITED(status) && WEXITSTATUS(status);
}


int main(int ac, char **av ,char **env)
{
	int status;
	int i = 0;

	if (ac > 1)
	{
		while (av[i] && av[++i])
		{
			av += i;
			i = 0;
			while (av[i] && strcmp(av[i], "|") && strcmp(av[i], ";"))
				i++;
			if (!strcmp(*av, "cd"))
				status = cd(av, i);
			else if (i)
				status = exec(av, i, env);
		}
	}
	return status;
}