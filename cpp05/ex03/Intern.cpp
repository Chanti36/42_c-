/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:58:58 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/06 11:24:40 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::Intern(const Intern & copy)
{
	*this = copy;	
}

Intern::~Intern()
{
	
}

Intern& Intern::operator=(const Intern& other)
{
	(void) other;
	return (*this);	
}

AForm*  Intern::makeForm( std::string name, std::string target )
{
	std::string formNames[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm*    forms[] = {new RobotomyRequestForm( target ), new PresidentialPardonForm( target ), new ShrubberyCreationForm( target )};
	for (int i(0); i < 3; i++)
	{
		if (name == formNames[i])
			return(std::cout << "Intern creates " << name<< std::endl ,forms[i]);
	}
	std::cout << "Intern cannot create " << name << " form" << std::endl;
	return (NULL);
}
