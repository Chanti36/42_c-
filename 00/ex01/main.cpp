/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:08:23 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/02/22 16:43:43 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{	
	std::string input;
		
	PhoneBook phoneBook;

	(void) argv;
	argc = 0;

	while(1)
	{
		std::cout << "__PhoneBook__" << std::endl;
		std::cin >> input;
		
		if (!input.compare("ADD"))
			phoneBook.Add();
		if (!input.compare("SEARCH"))
			phoneBook.Search();
		if (!input.compare("EXIT"))
			return (0);
	}
	return(0);
}