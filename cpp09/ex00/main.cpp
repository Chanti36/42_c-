/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:05:33 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/30 11:44:41 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

float ft_stof(const std::string& str);


int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cerr << "Error: could not open file", 1);

	//open input
	std::ifstream input(argv[1], std::ifstream::in);	
	if (!input.is_open())
		return (std::cerr << "Error: could not open file", 1);
	//open database
    std::ifstream dataBase("./data.csv", std::ifstream::in);
		if (!dataBase.is_open())
		return (std::cerr << "Error: fatal: could not open internal database file", 1);

	BitcoinExchange btc;
	btc.readInternalDataBase(dataBase);

	std::string line;

    // skip first line
    std::getline(input, line);
    while (std::getline(input, line))
    {
        size_t delim = line.find('|');
		if (delim == std::string::npos || line.length() < delim + 2)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue ;
		}

		std::string date = line.substr(0, delim - 1);
		if (!btc.isDateInCorrectFormat(date) || !btc.isValidDate(date))
			continue;

        std::string rate_as_str = line.substr(delim + 2);
		if (!btc.isRateInCorrectFormat(rate_as_str))
			continue;

		float rate = ft_stof(rate_as_str);
		std::cout << date << " => " << rate << " = " << std::setprecision(2) << rate * btc.getRateFromDataBase(date) << std::endl;
    }
    input.close();
    dataBase.close();
	return (0);
}