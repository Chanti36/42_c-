/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:08:24 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/02/20 12:51:00 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
		return(std::wcout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 1);
	
	for (int i = 1; i < argc; i++)
	{
		int j = 0;
		while (argv[i][j])
		{
			std::wcout << (char)toupper(argv[i][j]);
			++j;
		}
	}
	std::wcout << std::endl;
	return (0);
}