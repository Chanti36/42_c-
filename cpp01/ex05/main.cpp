/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:39:34 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/25 10:11:15 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl harl;

	harl.complain("debug");
	std::cout << "--------------------------------" << std::endl;
	harl.complain("info");
	std::cout << "--------------------------------" << std::endl;
	harl.complain("warning");
	std::cout << "--------------------------------" << std::endl;
	harl.complain("error");
	std::cout << "--------------------------------" << std::endl;
	return (0);
}