/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:57:44 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/22 10:30:26 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << _type << " Constructor" << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "Animal "<< _type << " Constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << _type << " Copy" << std::endl;
	*this = src;
}

Animal& Animal::operator = (const Animal& other)
{
	_type = other._type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}
