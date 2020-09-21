#include "Fixed.hpp"

Fixed::Fixed(void): _value(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed(void) {
    return ;
}

Fixed	&Fixed::operator=(Fixed const &src) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->_value = src.getRawBits();
    return *this;
}

int    Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void    Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
    return ;
}

const int    Fixed::fractional_bits = 8;