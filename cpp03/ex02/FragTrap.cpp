/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:17:05 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/16 10:55:16 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_name = "default";
	std::cout << "Default FragTrap created!\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_name = name;
	std::cout << "FragTrap " << _name << " created!\n";
}

FragTrap::FragTrap(const FragTrap &copy) :ClapTrap(copy)
{
	std::cout << "Fragtrap copy" << std::endl;
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap " << _name << " destroyed!\n";
};

FragTrap & FragTrap::operator = (const FragTrap &other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " high five." << std::endl;
}
