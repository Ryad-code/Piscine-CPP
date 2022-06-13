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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits( const int raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

Fixed&		Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->value = rhs.getRawBits();
	return *this;
}
