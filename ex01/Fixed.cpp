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

Fixed::Fixed(const int v_int)
{
	std::cout << "Int constructor called"<< std::endl;
	this->rawBits = v_int << bits;
}

Fixed::Fixed(const float v_float)
{
	std::cout << "Float constructor called"<< std::endl;
	this->rawBits = ((int)(roundf)(v_float * (1 << bits)));
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
	return rawBits;
}

float Fixed::toFloat() const
{
	return ((float)rawBits / (1 << bits));
}

int Fixed::toInt() const
{
	return ((int)(roundf)((float)rawBits / (1 << bits)));
}


std::ostream &operator << (std::ostream &ostream, const Fixed &fixed)
{
	ostream << fixed.toFloat();

	return ostream;
}
