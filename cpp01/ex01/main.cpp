/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:31:44 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 10:25:25 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int i = 0;
	int size = 3;

	horde = zombieHorde(size, "eufrasio");
	while (i < size)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
