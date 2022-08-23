#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const int v_int);
	Fixed(const float v_float);
	Fixed(const Fixed &other);

	~Fixed();

	Fixed & operator = (const Fixed &other);

	int getRawBits() const;
	void setRawBits(const int raw);


	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int rawBits;
	const static int bits = 8;
};

std::ostream& operator << (std::ostream &ostream, const Fixed &fixed);

#endif //FIXED_HPP
