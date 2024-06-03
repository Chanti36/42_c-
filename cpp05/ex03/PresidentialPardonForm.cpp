/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:53:34 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/06 11:17:31 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	(void) copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	(void) other;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat & bureaucrat) const
{
	if (bureaucrat.getGrade() > getGradeToExecute())
		throw (GradeTooLowException());
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
