#ifndef FIX_HPP
#define FIX_HPP

#include <iostream>

class Fixed
{
	private:
		int			value;
		static const int	bitsi = 8;

	public:
		Fixed(void);
		Fixed(const Fixed& obj);
		~Fixed(void);

		Fixed&		operator=( const Fixed& rhs );

		int			getRawBits( void ) const;
		void		setRawBits( const int raw );
};

#endif


