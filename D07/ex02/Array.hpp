#ifndef		ARRAY_HPP
# define	ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T *		_array;
		unsigned int	_size;

	public:

		Array( void ) : _array(new T[0]), _size(0) {};
		Array( Array const & src ) : _array(new T[src._size]), _size(src._size)
		{
			for (unsigned int i(0); i < src._size; i++)
				this->_array[i] = src._array[i];
		}
		Array( unsigned int n ) : _array(new T[n]), _size(n) {};
		~Array( void ) { delete [] this->_array; }

		Array &		operator=( Array const & other )
		{
			delete [] this->_array;
			_array = new T[other._size];
			for (int i(0); i < other._size; i++)
				this->_array[i] = other._array[i];
			this->_size = other._size;
			return *this;
		}

		T &		operator[]( unsigned int i )
		{
			if (i >= this->_size)
				throw Array::OutOfRange();
			else
				return this->_array[i];
		}

		unsigned int	size( void ) const { return this->_size; }
	
		class OutOfRange : public std::exception
		{
			public :
				virtual const char* what() const throw() { return "Out of limits !" ;}
		};
};

#endif
