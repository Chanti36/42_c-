/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:57:31 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/06 11:08:33 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	(void) other;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat & bureaucrat) const
{
	if (!getSigned())
		throw (NotSignedException());
	else if (bureaucrat.getGrade() > getGradeToExecute())
		throw (GradeTooLowException());
	std::string filename = getName() + "_shrubbery";
	std::ofstream file(filename.c_str());
	file << "🌳 ASCII trees 🌳" << std::endl;
	file.close();
}