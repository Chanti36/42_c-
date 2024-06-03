/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:51:39 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/20 11:06:36 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include <cstdlib>

Base* generate() 
{
	std::srand(time(NULL));

	int n = rand() % 3;
    if (n == 0)
        return (std::cout << "created an A class" << std::endl, new A);
    else if (n == 1)
        return (std::cout << "created a B class" << std::endl, new B);
    else
        return (std::cout << "created a C class" << std::endl, new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL) 
		std::cout << "A class was identified" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL) 
		std::cout << "B class was identified" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL) 
		std::cout << "C class was identified" << std::endl;
	else 
		std::cout << "Can't identify the class" << std::endl;
}

void identify(Base& p) 
{
	try
	{
		A& aux = dynamic_cast<A&>(p);
		(void) aux;
		std::cout << "A class was identified" << std::endl;
		return;
	}	
	catch (...) 
	{
		
	}

	try
	{
		B& aux = dynamic_cast<B&>(p);
		(void) aux;
		std::cout << "B class was identified" << std::endl;
		return;
	} 
	catch (...) 
	{
		
	}

	try
	{
		C& aux = dynamic_cast<C&>(p);
		(void) aux;
		std::cout << "C class was identified" << std::endl;
		return;
	}	
	catch (...)
	{

	}

	std::cout << "Can't identify the class" << std::endl;
}

int main() 
{
	Base *base;

	base = generate();
	identify(base);
	identify(*base);

	return (0);
}