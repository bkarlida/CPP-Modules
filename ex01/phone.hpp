# ifndef PHONE_HPP
# define PHONE_HPP

# include <iostream>
# include <iomanip>


class	phonebook
{
	public:

	std::string marka; 
	std::string model; 
	int yil;


	void	araba(int y, std::string mr, std::string md)
	{
		marka = mr;
		model = md;
		yil = y;
	}

	void	print()
	{
		std::cout << "marka:" << marka << std::endl << "model:" << model << std::endl << "yıl:"  << yil << std::endl;

	}
};

#endif