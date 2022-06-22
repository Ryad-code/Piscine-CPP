#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const	std::string	name;
		const	int		s_grade;
		const	int		e_grade;
		bool			sign;

	public:
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *	what() const throw()
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

		class FormSignedException: public std::exception
		{
			public:
				virtual const char *	what() const throw()
				{
					return "Form has been signed already";
				}
		};

		Form(void);
		Form(std::string name, int s_grade, int e_grade);
		Form(const Form& obj);
		~Form(void);

		Form&	operator=(const Form& obj);

};

#endif
