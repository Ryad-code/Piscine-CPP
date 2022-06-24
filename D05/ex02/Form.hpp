#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

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

		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char *    what() const throw()
				{
					return "Form has not been signed";
				}
		};

		Form(void);
		Form(std::string nname, int ns_grade, int ne_grade);
		Form(const Form& obj);
		virtual ~Form(void);

		Form&	operator=(const Form& obj);

		std::string	getName(void) const;
		int		getS_grade(void) const;
		int		getE_grade(void) const;
		bool		getSign(void) const;
		void		setSign(bool n);

		void		beSigned(Bureaucrat& obj);

		virtual void	execute(const Bureaucrat& obj) const;
		virtual void	executeForm(void) const = 0;	
};

std::ostream&	operator<<(std::ostream& o, const Form& obj);

#endif
