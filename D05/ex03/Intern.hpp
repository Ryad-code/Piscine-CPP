#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentPardonForm.hpp"

class Intern
{
	private:
		Form*	array[3];
	public:
		class InvalidFormNameException: public std::exception
		{
			public:
				virtual const char *	what() const throw()
				{
					return "Form could not be created: No form with this name has been found";
				}
		};

		Intern(void);
		Intern(const Intern& obj);
		~Intern(void);

		Intern&		operator=(const Intern& obj);
		Form*		makeForm(std::string form_name, std::string target);
};

#endif
