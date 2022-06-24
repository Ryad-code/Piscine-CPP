#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("no_name"), grade(150)
{
	std::cout << "Default constructor called!(Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string new_name, int new_grade): name(new_name), grade(new_grade)
{
	if (new_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (new_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Constuctor called! (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	*this = obj;
	std::cout << "Copy constructor called! (Bureaucrat)" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called! (Bureaucrat)" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return this->name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signs " << form << std::endl;
	}
	catch (std::exception & error)
	{
		std::cerr << *this << " cannot sign " << form << " because : " << error.what() <<  std::endl;
	}
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
		this->grade = obj.grade;
	return *this;
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& obj)
{
	o << obj.getName() << ", bureaucrat grade : " << obj.getGrade();
	return o;
}
