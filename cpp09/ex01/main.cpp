/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:13:29 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/06/03 14:20:59 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool valid_expression(const std::string& expr)
{
    if (expr.find_first_not_of("0123456789+-/* ") == std::string::npos)
	    return (true);
	return (false);
}

int main(int argc, char ** argv)
{
	if (argc != 2)
        return (std::cerr << "wrong arguments" << std::endl, 1);
	if (!argv[1][0])
        return (std::cerr << "bad arguments" << std::endl, 1);
	if (!valid_expression(argv[1]))
        return (std::cerr << "bad arguments" << std::endl, 1);
    try
    {
        std::cout << RPN::calculate(argv[1]) << std::endl;
    }
    catch (std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
    }
	return (0);
}
