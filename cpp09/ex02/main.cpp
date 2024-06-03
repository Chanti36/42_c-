/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:14:49 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/06/03 10:24:02 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "PmergeMe.hpp"

unsigned int ft_stou(const std::string& str)
{
	unsigned int num;
	std::stringstream ss(str);

	ss >> num;
	return (num);
}

int main(int argc, char **argv)
{
	if (argc == 1)
	    return (1);

    PmergeMe pmm;

    try
    {
        std::vector<unsigned int>temp;
        std::vector<unsigned int>::iterator itr;
        std::vector<unsigned int>::iterator itr2;

        for (int i = 1; i < argc; i++)
            if (std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
			    throw PmergeMe::InvalidElementException();

        for (int i = 1; i < argc; i++)
            temp.push_back(ft_stou(argv[i]));

        for (itr = temp.begin(); itr != temp.end(); itr++)
        {
            for (itr2 = itr + 1; itr2 != temp.end(); itr2++)
                if (*itr2 == *itr)
			        throw PmergeMe::InvalidElementException();
        }
    }
    catch (std::exception& e) 
    {
        return (std::cerr << e.what() << std::endl, 1);
    }

    pmm.sortVec(argc, argv);
    std::cout << std::endl;
    pmm.sortList(argc, argv);

	return (0);
}