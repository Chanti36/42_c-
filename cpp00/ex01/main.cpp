/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:08:23 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/04 15:21:40 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{	
	std::string input;
	PhoneBook phoneBook;

	while(1)
	{
		std::cout << "__PhoneBook__" << std::endl;
		std::cin >> input;
		if (std::cin.eof())
			return(1);

		if (!input.compare("ADD"))
			phoneBook.Add();
		if (!input.compare("SEARCH"))
			phoneBook.Search();
		if (!input.compare("EXIT"))
			return (0);
	}
	return(0);
}
