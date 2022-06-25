#include "Form.hpp"

Form::Form(void): name("no_name"), s_grade(150), e_grade(150), sign(false)
{
	std::cout << "Default constructor called! (Form)" << std::endl;
}

Form::Form(std::string nname, int ns_grade, int ne_grade): name(nname), s_grade(ns_grade), e_grade(ne_grade), sign(false)
{
	std::cout << "Constructor called! (Form)" << std::endl;
	if (this->s_grade > 150 || this->e_grade > 150)
		throw Form::GradeTooLowException();
	else if (this->s_grade < 1 || this->e_grade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form& obj): name(obj.name), s_grade(obj.s_grade), e_grade(obj.e_grade), sign(obj.sign)
{
	std::cout << "Copy constructor called! (Form)" << std::endl;
}

Form::~Form(void)
{
//	std::cout << "Destructor called! (Form)" << std::endl;
}

Form&   Form::operator=(const Form& obj)
{
	this->sign = obj.sign;
	return *this;
}

std::string	Form::getName(void) const
{
	return this->name;
}

int	Form::getS_grade(void) const
{
	return this->s_grade;
}

int     Form::getE_grade(void) const
{
        return this->e_grade;
}

bool	Form::getSign(void) const
{
	return this->sign;
}

void	Form::setSign(bool n)
{
	this->sign = n;
}

void	Form::beSigned(Bureaucrat& obj)
{
	std::cout << obj.getName() << " is trying to sign " << this->getName() << std::endl;
	if (this->sign == true)
		throw Form::FormSignedException();
	else if (obj.getGrade() > this->getS_grade())
	       throw Form::GradeTooLowException();
	else
		this->sign = true;
}

void	Form::execute(const Bureaucrat& obj) const
{
	std::cout << obj << " is trying to execute " << *this << std::endl;
	if (this->sign == false)
		throw Form::FormNotSignedException();
	else if (obj.getGrade() > this->getE_grade())
		throw Form::GradeTooLowException();
	else
	{
		std::cout << obj << " executes " << *this << std::endl;
		executeForm();
	}
}

std::ostream&   operator<<(std::ostream& o, const Form& obj)
{
	o << "Form: " << obj.getName() << ", s_grade: " << obj.getS_grade() << ", e_grade: " << obj.getE_grade() << ", sign: " << obj.getSign();
        return o;
}
