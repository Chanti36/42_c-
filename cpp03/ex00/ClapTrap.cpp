/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:38:14 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/15 11:10:15 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "default";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Default ClapTrap created!\n";
}
ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " created!\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructed" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed!\n";
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		return;
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left!\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target <<", causing " << _attackDamage << " points of damage!\n";
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " already died!\n";	
		return ;
	}
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount <<" damage!\n";
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " died!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
		return ;
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left!\n";
		return ;
	}
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " repaired itself " << amount << " points of health!\n";
}
