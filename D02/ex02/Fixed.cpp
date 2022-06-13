#include "Fixed.hpp"

Fixed::Fixed(void)
{
//	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& obj)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int i)
{
//	std::cout << "Int constructor called" << std::endl;
	this->value = i << bits;
}

Fixed::Fixed(const float f)
{
//	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * (1 << bits));
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
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

//.......................................................//Operators
Fixed&		Fixed::operator=(const Fixed& obj)
{
//	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &obj)
		this->value = obj.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& o, const Fixed& obj)
{
	o << obj.toFloat();
	return o;
}
//.......................................................//Operators comparaison
bool	Fixed::operator>(const Fixed& obj)
{
	return (this->getRawBits() > obj.getRawBits());
}

bool	Fixed::operator<(const Fixed& obj) const
{
	return (this->getRawBits() < obj.getRawBits());
}

bool	Fixed::operator>=(const Fixed& obj) const
{
	return (this->getRawBits() >= obj.getRawBits());
}

bool	Fixed::operator<=(const Fixed& obj) const 
{
	return (this->getRawBits() <= obj.getRawBits());
}

bool	Fixed::operator==(const Fixed& obj) const
{
	return (this->getRawBits() == obj.getRawBits());
}

bool	Fixed::operator!=(const Fixed& obj) const
{
	return (this->getRawBits() != obj.getRawBits());
}

//........................................................//Operators(+ - * /)

Fixed	Fixed::operator+(const Fixed& obj)
{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed& obj)
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed& obj)
{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed& obj)
{
	return Fixed(this->toFloat() / obj.toFloat());
}

//.........................................................Operateurs d'incrementation

Fixed&          Fixed::operator++(void)
{
	this->value++;
	return *this;
}

Fixed          Fixed::operator++(int)
{
	Fixed	obj(*this);
	this->value++;
	return obj;
}

Fixed&          Fixed::operator--(void)
{
	this->value--;
	return *this;
}

Fixed          Fixed::operator--(int)
{
	Fixed	obj(*this);
	this->value++;
	return obj;
}

//.........................................................Fonctions ex02
Fixed&  Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1 < obj2)
        	return obj1;
	else
		return obj2;
}

const Fixed&  Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1 < obj2)
        	return obj1;
	else
		return obj2;
}

Fixed&  Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1 > obj2)
        	return obj1;
	else
		return obj2;
}

const Fixed&  Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1 > obj2)
        	return obj1;
	else
		return obj2;
}
