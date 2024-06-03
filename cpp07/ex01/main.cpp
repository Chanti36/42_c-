/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:23:20 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/24 10:28:27 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

int main()
{
	char array[] = {'A', 'B', 'C'};

	std::cout <<
	"Original:" << std::endl <<
	"0: " << array[0] << std::endl <<
	"1: " << array[1] << std::endl <<
	"2: " << array[2] << std::endl <<
	std::endl;

	::iter(array, sizeof(array) / sizeof(char), ft_tolower);
	std::cout <<
	"ToLower:" << std::endl <<
	"0: " << array[0] << std::endl <<
	"1: " << array[1] << std::endl <<
	"2: " << array[2] << std::endl <<
	std::endl;

	::iter(array, 2, ft_toupper);
	std::cout <<
	"ToUpper:" << std::endl <<
	"0: " << array[0] << std::endl <<
	"1: " << array[1] << std::endl <<
	"2: " << array[2] << std::endl <<
	std::endl;

	return (0);
}
