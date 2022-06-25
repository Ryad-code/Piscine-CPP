#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreation", 145, 137)
{
	std::cout << "Default constructor called (ShrubberyCreationForm)" << std::endl;
	this->target = "no target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string n_target): Form("ShrubberyCreation", 145, 137)
{
	std::cout << "Typed constructor called (ShrubberyCreationForm)" << std::endl;
	this->target = n_target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj): Form(obj)
{
	std::cout << "Copy constructor called (ShrubberyCreationForm)" << std::endl;
	this->target = obj.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm&   ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	this->target = obj.target;
	this->setSign(obj.getSign());
	return *this;
}

void	ShrubberyCreationForm::executeForm(void) const
{
	std::string filename = this->target;
	std::ofstream flux(filename.c_str());
	flux << "     _\\/_          _\\/_     " << std::endl;
    	flux << "      /\\            /\\      " << std::endl;
	flux << "      /\\            /\\      " << std::endl;
    	flux << "     /  \\          /  \\     " << std::endl;
    	flux << "     /~~\\o         /~~\\o     " << std::endl;
	flux << "    /o   \\        /o   \\     " << std::endl;
	flux << "   /~~*~~~\\      /~~*~~~\\    " << std::endl;
	flux << "  o/    o \\     o/    o \\    " << std::endl;
	flux << "  /~~~~~~~~\\~`  /~~~~~~~~\\~` " << std::endl;
	flux << " /__*_______\\  /__*_______\\  " << std::endl;
	flux << "      ||            ||       " << std::endl;
	flux << "    \\====/        \\====/     " << std::endl;
	flux << "     \\__/          \\__/      " << std::endl;
	flux << "Big trees incoming!" << std::endl;
	flux.close();
}
