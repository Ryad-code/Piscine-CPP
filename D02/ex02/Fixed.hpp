#ifndef FIX_HPP
#define FIX_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int			value;
		static const int	bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed& obj);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed(void);

		Fixed&		operator=(const Fixed& obj);

		bool		operator>(const Fixed& obj) const;
		bool		operator<(const Fixed& obj) const;
		bool		operator>=(const Fixed& obj) const;
		bool		operator<=(const Fixed& obj) const;
		bool		operator==(const Fixed& obj) const;
		bool		operator!=(const Fixed& obj) const;
		
		Fixed		operator+(const Fixed& obj);
		Fixed		operator-(const Fixed& obj);
		Fixed		operator*(const Fixed& obj);
		Fixed		operator/(const Fixed& obj);
		
		Fixed&		operator++(void);
		Fixed		operator++(int);
		Fixed&		operator--(void);
		Fixed		operator--(int);

		int		getRawBits(void) const;
		void		setRawBits(const int raw);

		float		toFloat(void) const;
		int		toInt(void) const;

		static	Fixed&	min(Fixed& obj1, Fixed& obj2);
		static	const Fixed&	min(const Fixed& obj1, const Fixed& obj2);
		static	Fixed&	max(Fixed& obj1, Fixed& obj2);
		static	const Fixed&	max(const Fixed& obj1, const Fixed& obj2);
};

std::ostream&		operator<<( std::ostream& o, const Fixed& obj);

#endif


