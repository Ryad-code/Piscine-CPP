#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

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

		std::string	getName(void) const;
		int		getGrade(void) const;

		Bureaucrat&	operator=(const Bureaucrat& obj);
};

std::ostream &			operator<<(std::ostream& o, const Bureaucrat& obj);

#endif
