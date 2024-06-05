/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:32:26 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/08 09:56:44 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &new_weapon) : _weapon(new_weapon)
{
	_name = name;
}

HumanA::~HumanA()
{
	std::cout << _name << " died" << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attack with "<< getWeapon().getType() << std::endl;
}

Weapon HumanA::getWeapon()
{
	return (_weapon);
}