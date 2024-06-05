/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:40:49 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/25 09:58:32 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "DEBUG MESSAGE\n";
}
void Harl::info(void)
{
	std::cout << "INFO MESSAGE\n";
}
void Harl::warning(void)
{
	std::cout << "WARNING MESSAGE\n";
}
void Harl::error(void)
{
	std::cout << "ERROR MESSAGE\n";
}

void Harl::complain(std::string level)
{
	void(Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"debug", "info", "warning", "error"};
	
	for (size_t  i = 0; i < levels->length(); i++)
	{
		if(level == levels[i])
		{
			(this->*ptr[i])();
			break;
		}
	}
}
