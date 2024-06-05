/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:42:59 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/18 11:07:34 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

Brain::Brain(const Brain & copy)
{
	std::cout << "Brain Copy Constructor" << std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain& other)
{
	for (size_t i = 0; i < 100; i++)
	{
		_ideas[i] = other._ideas[i];
	}	
	return (*this);
}
