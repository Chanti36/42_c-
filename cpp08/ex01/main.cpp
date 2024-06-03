/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:03:02 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/27 10:44:43 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	int shortest;
	int longest;
	Span sp = Span(5);
	
	// std::vector<int> v;
	// v.push_back(6);
	// v.push_back(3);
	// v.push_back(17);
	// v.push_back(9);
	// v.push_back(11);
	
	// sp.addNumber(v.begin(), v.end());
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{	
		sp.addNumber(11);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		shortest = sp.shortestSpan();
		longest = sp.longestSpan();	
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	std::cout << "shortest: " << shortest << std::endl;
	std::cout << "longest: "  << longest  << std::endl;	

	return (0);
}
