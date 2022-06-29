#include <iostream>
#include "Test.hpp"

int main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "Bonjour";
	std::string d = "Aurevoir";
	
	std::cout << "Before swap :" << std::endl;
	std::cout << "string1 = " << c << std::endl;
	std::cout << "string2 = " << d << std::endl;
	
	::swap(c, d);
	std::cout << "After swap :" << std::endl;
	std::cout << "string1 = " << c << std::endl;
	std::cout << "string2 = " << d << std::endl;
	
	std::cout << "min( string1, string2 ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( string1, string2 ) = " << ::max( c, d ) << std::endl;
	return 0;
}
