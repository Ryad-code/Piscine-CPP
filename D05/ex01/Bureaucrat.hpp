#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		int			grade;

	public:
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return "Grade is too high!";
				}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *	what() const throw()
				{
					return "Grade is too low!";
				}

		};

		Bureaucrat(void);
		Bureaucrat(std::string new_name, int new_grade);
		Bureaucrat(const Bureaucrat& obj);
		~Bureaucrat(void);

		Bureaucrat&     operator=(const Bureaucrat& obj);

		std::string	getName(void) const;
		int		getGrade(void) const;

		void	signForm(Form& form);
};

std::ostream &			operator<<(std::ostream& o, const Bureaucrat& obj);

#endif
