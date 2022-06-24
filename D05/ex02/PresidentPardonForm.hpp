#ifndef PRESIDENTPARDONFORM_HPP
#define PRESIDENTPARDONFORM_HPP

#include "Form.hpp"

class	PresidentPardonForm : public Form
{
	private:
                std::string     target;

	public:
		PresidentPardonForm(void);
		PresidentPardonForm(std::string n_target);
		PresidentPardonForm(const PresidentPardonForm& obj);
		~PresidentPardonForm(void);

		PresidentPardonForm& operator=(const PresidentPardonForm& obj);

		void    executeForm(void) const;
};

#endif
