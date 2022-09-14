#include "Fixed.hpp"

Fixed::Fixed()
{
//	std::cout << "Default constructor called"<< std::endl;
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed &other)
{
//	std::cout << "Copy constructor called"<< std::endl;
	this->rawBits = other.getRawBits();
}

Fixed::Fixed(const int v_int)
{
//	std::cout << "Int constructor called"<< std::endl;
	this->rawBits = v_int << bits;
}

Fixed::Fixed(const float v_float)
{
//	std::cout << "Float constructor called"<< std::endl;
	this->rawBits = ((int)(roundf)(v_float * (1 << bits)));
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called"<< std::endl;
}

Fixed &Fixed::operator = (const Fixed &other)
{
//	std::cout << "Copy assignment operator called"<< std::endl;
	this->rawBits = other.getRawBits();

	return *this;
}

Fixed Fixed::operator + (const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() + other.getRawBits());

	return result;
}

Fixed Fixed::operator - (const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() - other.getRawBits());

	return result;
}

Fixed Fixed::operator * (const Fixed &other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() * other.getRawBits()) >> bits);

	return result;
}

Fixed Fixed::operator / (const Fixed &other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() / other.getRawBits()) << bits);

	return result;
}

bool Fixed::operator == (const Fixed &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator != (const Fixed &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

bool Fixed::operator <= (const Fixed &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator >= (const Fixed &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator > (const Fixed &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator < (const Fixed &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

Fixed &Fixed::operator++()
{
	this->rawBits++;

	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->rawBits++;

	return temp;
}

Fixed &Fixed::operator--()
{
	this->rawBits--;

	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->rawBits--;

	return temp;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a > b ? b : a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a > b ? b : a);
}

void Fixed::setRawBits(const int raw)
{
//	std::cout << "setRawBits member function called"<< std::endl;
	this->rawBits = raw;
}

int Fixed::getRawBits() const
{
	return rawBits;
}

float Fixed::toFloat() const
{
	return ((float) rawBits / (1 << bits));
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
