#include "Fixed.hpp"
Fixed::Fixed() {
    this->fixedPointValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy) {
    std::cout << "Copy assignment operator called" << std::endl;
       this->fixedPointValue = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    this->fixedPointValue = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
