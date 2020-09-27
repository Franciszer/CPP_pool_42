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

Fixed::Fixed(int const val): _value(0) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = val << this->fractional_bits;
    return ;
}

Fixed::Fixed(float const val): _value(0) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = (int)roundf(val * (1 << this->fractional_bits));
    return ;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed	&Fixed::operator=(Fixed const &src) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->_value = src.getRawBits();
    return *this;
}

int    Fixed::getRawBits(void) const {
    return this->_value;
}

void    Fixed::setRawBits( int const raw ) {
    this->_value = raw;
    return ;
}

const int    Fixed::fractional_bits = 8;

float        Fixed::toFloat(void) const {
    return ((float)this->_value / (float)(1 << this->fractional_bits));
}

int          Fixed::toInt(void) const {
    return (this->_value >> this->fractional_bits);
}

Fixed				Fixed::operator+(Fixed const rha) {
	Fixed	result;

	result.setRawBits(this->getRawBits() + rha.getRawBits());
	return (result);
}

Fixed				Fixed::operator-(Fixed const rha) {
	Fixed	result;

	result.setRawBits(this->getRawBits() - rha.getRawBits());
	return (result);
}
Fixed				Fixed::operator*(Fixed const rha) {
	Fixed	result;

	result.setRawBits(this->getRawBits() * rha.getRawBits());
	return (result);
}
Fixed				Fixed::operator/(Fixed const rha) {
	Fixed	result;

	result.setRawBits(this->getRawBits() / rha.getRawBits());
	return (result);
}

std::ostream		&operator<<(std::ostream &os, const Fixed &fixedPoint) {
    os << fixedPoint.toFloat();
    return os;
}

bool				Fixed::operator!=(Fixed const rha) {
	return (this->getRawBits() != rha.getRawBits());
}

bool				Fixed::operator>(Fixed const rha) {
	return (this->getRawBits() > rha.getRawBits());

}

bool				Fixed::operator>=(Fixed const rha) {
	return (this->getRawBits() >= rha.getRawBits());
}

bool				Fixed::operator<(Fixed const rha) {
	return (this->getRawBits() < rha.getRawBits());
}

bool				Fixed::operator<=(Fixed const rha) {
	return (this->getRawBits() <= rha.getRawBits());
}
