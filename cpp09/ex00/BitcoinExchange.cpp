/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:03:51 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/06/03 10:55:30 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static unsigned int ft_stou(const std::string& str)
{
    unsigned int num;
    std::stringstream lineArray(str);

    lineArray >> num;
    return (num);
}

float ft_stof(const std::string& str)
{
    float num;
    std::stringstream lineArray(str);

	lineArray >> num;
	return (num);
}

//______________________________________________________________________________________

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) 
{
    *this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    _dataBase = other._dataBase;
    return (*this);
}

float BitcoinExchange::getRateFromDataBase(const std::string& date)
{
    if (_dataBase.count(date) > 0)
        return _dataBase.at(date);
    return ((--_dataBase.lower_bound(date))->second);
}

bool BitcoinExchange::isDateInCorrectFormat(const std::string &date)
{
	if (date.empty())
		return (false);

 	size_t first_hyphen = date.find('-');
    size_t second_hyphen = date.find('-', first_hyphen + 1);

	if (first_hyphen == std::string::npos || second_hyphen == std::string::npos || 
	date.find_first_not_of("0123456789.-") != std::string::npos)
		return (std::cerr << "Error: bad input => " << "\"" << date << "\"" << std::endl, false);
	return (true);
}

bool BitcoinExchange::isValidDate(const std::string& date)
{
	std::string line;
	int year, month, day;
	std::istringstream lineArray(date);
	int i = 0;

	while (std::getline(lineArray, line, '-'))
	{
		if (i == 0)
		{
			year = ft_stou(line);
			if (year < 2009 || year > 2022)
				return (std::cerr << "Error: incorrect year => " << "\"" << date << "\"" << std::endl, false);
		}
		else if (i == 1)
		{
			month = ft_stou(line);
			if (month < 1 || month > 12)
				return (std::cerr << "Error: incorrect month => " << "\"" << date << "\"" << std::endl, false);
		}
		else if (i == 2)
		{
			day = ft_stou(line);

			if ((day < 1 || day > 31)
			||  (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
			||  (day > 28 && month == 2))
				return (std::cerr << "Error: incorrect day => " << "\"" << date << "\"" << std::endl, false);
		}
		i++;
	}
	if (i != 3)
		return (std::cerr << "Error: incorrect date => " << "\"" << date << "\"" << std::endl, false);

	return (true);
}

bool BitcoinExchange::isRateInCorrectFormat(const std::string& rate)
{
	int count = 0;
	for (u_long i = 0; i < rate.size(); ++i)
	{
		if (rate[i] == '.')
			++count;
	}
	if (count > 1)
		return (std::cerr << "Error: invalid rate => " << "\"" << rate << "\"" << std::endl, false);
	if (rate.empty() ||
		rate.find_first_not_of("0123456789.-") != std::string::npos	||
		rate.find('.', rate.length() - 1) != std::string::npos ||
		rate.at(0) == '-' || 
		rate.length() > 10 || 
		(rate.length() == 10 && rate > "2147483647"))
		return (std::cerr << "Error: invalid rate => " << "\"" << rate << "\"" << std::endl, false);

	return (true);
}

void BitcoinExchange::readInternalDataBase(std::ifstream& internal_db)
{
    std::string line;
    size_t delim;

    // skip first line
    std::getline(internal_db, line);
    while (std::getline(internal_db, line))
    {
        delim = line.find(',');
        std::string rate = line.substr(delim + 1);
        // set a new pair on the map <date, rate>
        _dataBase[line.substr(0, delim)] = ft_stof(rate);
    }
    internal_db.close();
}