/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:43:04 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/23 10:17:54 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << _type << " Constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << _type << " Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
{
	std::cout << _type << " Copy" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator = (const WrongCat& other)
{
	_type = other._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Miau" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (_type);
}
