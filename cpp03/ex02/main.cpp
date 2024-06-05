/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:58:10 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 14:48:50 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap claptrap("CLAP");
	claptrap.attack("Enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	std::cout << "_____________________\n" << std::endl;

	ScavTrap scavtrap("SCAV");
	scavtrap.attack("Enemy");
	scavtrap.takeDamage(14);
	scavtrap.guardGate();
	std::cout << "_____________________\n" << std::endl;

	FragTrap fragtrap("FRAG");
	fragtrap.attack("Enemy");
	fragtrap.takeDamage(9);
	fragtrap.highFivesGuys();
	std::cout << "_____________________\n" << std::endl;
	
	return 0;
}