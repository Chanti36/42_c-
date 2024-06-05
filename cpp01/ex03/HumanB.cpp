/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:24:41 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/08 09:58:03 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << _name << " died" << std::endl;
}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attack with " << getWeapon().getType() << "\n";
	else
		std::cout << _name << " doesn't have a weapon to attack" << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}

Weapon HumanB::getWeapon()
{
	return (*_weapon);
}