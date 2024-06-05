/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:58:10 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/02/29 11:41:16 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("CLAP");

	claptrap.attack("enemy");
	claptrap.takeDamage(3);
	claptrap.beRepaired(3);
	std::cout << "___________________________\n";
	ScavTrap scavtrap("SCAV");
	
	scavtrap.attack("enemy");
	scavtrap.guardGate();

	return 0;
}