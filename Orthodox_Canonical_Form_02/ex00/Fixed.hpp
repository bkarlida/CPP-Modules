#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int fixedPointValue;
	static const int bits = 8;

  public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &copy);
	int getRawBits() const;
	void setRawBits(int const raw);
	~Fixed();
};

#endif
