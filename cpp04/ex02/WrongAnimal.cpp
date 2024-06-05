/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:39:21 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/02 12:40:48 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << _type << " Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << _type << " Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << _type << " Copy" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other)
{
	_type = other._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}
