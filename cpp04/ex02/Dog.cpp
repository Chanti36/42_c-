/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:30:49 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/18 10:54:24 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->_type << " Constructor" << std::endl;
	_brain = new Brain();
}

Dog::~Dog()
{
	delete (_brain);
	std::cout << this->_type << " Destructor" << std::endl;
}

Dog::Dog(const Dog& src)
{
	std::cout << this->_type << " Copy" << std::endl;
	*this = src;
}

Dog& Dog::operator = (const Dog& other)
{
	_type = other._type;
	_brain = other._brain;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
}

std::string	Dog::getType() const
{
	return (_type);
}
