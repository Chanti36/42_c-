/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:22:31 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/18 10:36:08 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << this->_type << " Constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << _type << " Destructor" << std::endl;
}

Cat::Cat(const Cat& src)
{
	std::cout << _type << " Copy" << std::endl;
	*this = src;
}

Cat& Cat::operator = (const Cat& other)
{
	_type = other._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}

std::string	Cat::getType() const
{
	return (_type);
}
