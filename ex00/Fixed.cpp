#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called"<< std::endl;
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called"<< std::endl;
	this->rawBits = other.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called"<< std::endl;
	this->rawBits = other.getRawBits();

	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called"<< std::endl;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called"<< std::endl;
	this->rawBits = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called"<< std::endl;

	return rawBits;
}
