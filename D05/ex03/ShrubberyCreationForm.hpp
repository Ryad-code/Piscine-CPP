#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
		std::string	target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string n_target);
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&   operator=(const ShrubberyCreationForm& obj);

		void	executeForm(void) const;
		Form *	clone(std::string target);
};

#endif
