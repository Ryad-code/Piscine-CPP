#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include <stdlib.h>
#include <time.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	target;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string n_target);
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& obj);

		void    executeForm(void) const;
};

#endif
