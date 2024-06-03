/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:55:59 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/25 12:11:47 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	(void) other;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat & bureaucrat) const
{
	if (bureaucrat.getGrade() > getGradeToExecute())
		throw (GradeTooLowException());
	else
	{
		static int i;
		if (i % 2 == 0)
			std::cout << "BZZZZZT! " << _target << " has been robotomized!" << std::endl;
		else
			std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
		i++;
	}
}
