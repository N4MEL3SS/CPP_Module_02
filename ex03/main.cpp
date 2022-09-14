#include "Point.hpp"

int main()
{
	Point const a(0, 0);
	Point  const b(0, 4);
	Point  const c(3, 0);
	Point const point(0, 0);

	std::cout << "a.x: " << a.getX() << std::endl;
	std::cout << "a.y: " << a.getY() << std::endl;
	std::cout << "b.x: " << b.getX() << std::endl;
	std::cout << "b.y: " << b.getY() << std::endl;
	std::cout << "c.x: " << c.getX() << std::endl;
	std::cout << "c.y: " << c.getY() << std::endl;
	std::cout << "point.x: " << point.getX() << std::endl;
	std::cout << "point.y: " << point.getY() << std::endl;

	std::cout << "----------------------" << std::endl;

	if (bsp(a, b, c, point))
		std::cout << "Point is in a triangle!" << std::endl;
	else
		std::cout << "Point is not in a triangle!!!" << std::endl;
	return 0;
}
