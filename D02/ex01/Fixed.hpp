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

		Fixed&		operator=(const Fixed& rhs);

		int		getRawBits(void) const;
		void		setRawBits(const int raw);

		float		toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&		operator<<( std::ostream& o, const Fixed& rhs);

#endif


