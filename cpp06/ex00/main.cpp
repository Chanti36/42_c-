/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:00:41 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/17 11:30:16 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) 
{
	if (argc != 2) 
		return (std::cout << "Error: Wrong Parameters" << std::endl, 1);

	ScalarConverter::convert(argv[1]);
	return (0);
}