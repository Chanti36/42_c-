/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:27:01 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/25 12:38:50 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat bureaucrat("Burocrata", 2); // error with 200

    std::cout << "___Shrubbery___" << std::endl;

    ShrubberyCreationForm form1("Shrubbery");
    bureaucrat.signForm(form1);
    bureaucrat.executeForm(form1);

    std::cout << std::endl << "___Robotomy___" << std::endl;
    RobotomyRequestForm form2("Robotomy");
    bureaucrat.signForm(form2);
    std::cout << std::endl;
    bureaucrat.executeForm(form2);
    std::cout << std::endl;
    bureaucrat.executeForm(form2);
    std::cout << std::endl;
    bureaucrat.executeForm(form2);

    std::cout << std::endl << "___President___" << std::endl;
    PresidentialPardonForm form3("President");
    bureaucrat.signForm(form3);
    bureaucrat.executeForm(form3);
    
    return (0);
}