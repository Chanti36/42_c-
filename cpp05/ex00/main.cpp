/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:27:01 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/06 10:52:06 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *bureaucrat1;
	Bureaucrat *bureaucrat2;
	Bureaucrat *bureaucrat3;

//low
	try
	{
		bureaucrat1 = new Bureaucrat("1", 123123);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
//high
	try
	{
		bureaucrat2 = new Bureaucrat("2", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
//example
	try
	{
		bureaucrat3 = new Bureaucrat("jose", 2);		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << *bureaucrat3 << " created" << std::endl;
	
	try	{ bureaucrat3->increaseGrade(); }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *bureaucrat3 << std::endl;

	try { bureaucrat3->increaseGrade(); }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *bureaucrat3 << std::endl;
	
	delete (bureaucrat3);
	return (0);
}