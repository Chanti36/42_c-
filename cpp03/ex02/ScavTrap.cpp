/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:17:05 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/16 10:39:39 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_name = "default";
	std::cout << "Default ScavTrap created!\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_name = name;
	std::cout << "ScavTrap " << _name << " created!\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy Constructor Called" << std::endl;	
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap " << _name << " destroyed!\n";
};

ScavTrap & ScavTrap::operator = (const ScavTrap &other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " guards the gate!\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		return;
	if (_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy left!\n";
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " scavs " << target <<", causing " << _attackDamage << " points of damage!\n";
}