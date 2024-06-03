/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:27:01 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/06 10:55:13 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main( void )
{
    try
    {
        Bureaucrat bureaucrat("Burocrata",10);
        Form form("Formulario", 2, 2);

        bureaucrat.signForm(form);
    }
    catch (std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }
    
    try
    {
        Bureaucrat bureaucrat("Burocrata2",10);
        Form form("Formulario2", 10, 10);

        bureaucrat.signForm(form);
    }
    catch (std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}