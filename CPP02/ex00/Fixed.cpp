#include "Fixed.hpp"
#include <iostream>

const int	Fixed::bits = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->val = 0;
	return ; 
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		// TODO: copy member variables here
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called" << std::endl;

}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;

}
