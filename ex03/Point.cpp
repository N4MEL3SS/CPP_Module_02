#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(float x, float y) : _x(x), _y(y) {}

Point::Point(Point const &other) : _x(other._x), _y(other._y) {}

Point &Point::operator = (const Point &other)
{
	(void)other;
	return *this;
}

Point::~Point() {}

Fixed const Point::getX() const
{
	return (this->_x);
}

Fixed const Point::getY() const
{
	return (this->_y);
}

