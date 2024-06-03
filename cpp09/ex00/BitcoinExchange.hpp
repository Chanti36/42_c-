/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:57:06 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/28 12:06:15 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <fstream>
# include <string>
# include <sstream>
# include <string>
# include <map>
# include <cstdlib>
# include <iomanip>

class BitcoinExchange 
{
    private:
        std::map<std::string, float> _dataBase;
		
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange & copy);
        BitcoinExchange& operator=(const BitcoinExchange & other);
        ~BitcoinExchange();

        void readInternalDataBase(std::ifstream & internal_db);

        float getRateFromDataBase(const std::string& date);

        bool isDateInCorrectFormat(const std::string &date);
        bool isValidDate(const std::string& date);
        bool isRateInCorrectFormat(const std::string& rate);

};
