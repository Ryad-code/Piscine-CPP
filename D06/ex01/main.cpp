#include <stdint.h>
#include <iostream>

typedef struct		s_Data 
{
	int		n;
}			Data;

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

Data*		deserialize(uintptr_t raw)
{
	Data	*ptr = reinterpret_cast<Data *>(raw);
	return ptr;
}
int		main() {
	Data	*D = new Data;
	Data	*D2;
	D->n = 42;

	std::cout << "La valeur de l'int est : " << D->n << std::endl;
	
	uintptr_t u = serialize(D);
	
	std::cout << "La valeur de u apres un serialize(D) est : " << u << std::endl;
	
	D2 = deserialize(u);
	
	std::cout << "La valeur du nouveau int dans D2 est : " << D2->n << std::endl;
	
	delete D;

	return 0;
}
