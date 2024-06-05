/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:40:49 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/08 10:04:11 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "DEBUG\n";
}
void Harl::info(void)
{
	std::cout << "INFO\n";
}
void Harl::warning(void)
{
	std::cout << "WARNING\n";
}
void Harl::error(void)
{
	std::cout << "ERROR\n";
}

static int get_msg_lv(std::string level)
{
	std::string levels[] = {"debug", "info", "warning", "error"};
	for (size_t i = 0; i < levels->length(); i++)
	{
		if (level == levels[i])
			return (i);
	}
	return (-1);
}

void Harl::complain(std::string level)
{
	int lv_num;
	
	void(Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"debug", "info", "warning", "error"};

	lv_num = get_msg_lv(level);

	if (lv_num == -1)
	{
		std::cout << "Wrong level" << std::endl;
		return;
	}
	
	switch(lv_num)
	{
		case 0:
			(this->*ptr[0])();
		case 1:
			(this->*ptr[1])();
		case 2:
			(this->*ptr[2])();
		case 3:
			(this->*ptr[3])();
		break;
	}
}
