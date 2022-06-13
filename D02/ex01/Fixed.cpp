#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = i << this->bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * (1 << bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits( const int raw )
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int	Fixed::getRawBits( void ) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

int	Fixed::toInt(void) const
{
	return this->value >> this->bits;
}

float	Fixed::toFloat(void) const
{
	return (float)this->value / (1 << bits);
}

//.......................................................//Surcharges
Fixed&		Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->value = rhs.getRawBits();
	return *this;
}

std::ostream&	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return o;
}
