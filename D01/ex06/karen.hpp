#include <iostream>
#include <iomanip>
#include <string>

class	Karen
{

typedef void	(Karen::*ft_ptr)();
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);

	private:
		std::string	levels[4];
		ft_ptr		array[4];
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		int	index(std::string level);
};
