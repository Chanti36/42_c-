/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:04:49 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/20 10:58:34 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) 
{
	(void) other;
	return (*this); 
}


void ScalarConverter::convert(const std::string& literal) 
{
	std::string specialTypes[6] = 
	{
		"-inff",
		"+inff",
		"nanf",
		"-inf",
		"+inf",
		"nan"
	};

	std::string toChar = "";
	int toInt = 0;
	float toFloat = 0;
	double toDouble = 0;

	//CHAR
	if (literal.size() == 1 && !std::isdigit(literal[0]) && std::isprint(literal[0])) 
	{
		toChar = literal[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
		return;
	}
	
	//DIGIT
	toInt = std::atoi(literal.c_str());
	
	if (literal[literal.length() - 1] == 'f')
	{
		toFloat = std::atof(literal.c_str());
		toDouble = static_cast<double>(toFloat);
	}
    else 
	{
		toDouble = std::atof(literal.c_str());
		toFloat = static_cast<float>(toDouble);
	}

	//----------------------------------------------------

	for (int i = 0; i < 6; ++i) 
	{
		if (literal == specialTypes[i]) 
		{
			toChar = "imposible";
			break;
		}
	}
	
	if (toChar == "") 
	{
		bool wrongInput = false;
		for(size_t i = 0; i < literal.length(); i++)
		{
			if (literal[i] != '.' && literal[i] != 'f' && literal[i] != '+' && literal[i] != '-' && !isdigit(literal[i]))
				wrongInput = true;
		}
		if (wrongInput)
		{
			std::cout << "Wrong Parameter" << std::endl;
			return;
		}
			
		if (std::isprint(toInt))
			toChar = static_cast<char>(toInt);
		else
			toChar = "Non displayable";
	}

	std::cout << "char: " << toChar << std::endl;

	//----------------------------------------------------

	if (toChar == "imposible") 
		std::cout << "int: imposible" << std::endl;
	else 
		std::cout << "int: " << toInt << std::endl;

	//----------------------------------------------------

	if (toChar == "imposible" && toFloat == 0) 
	{
		std::cout << "float: imposible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	} 
	else 
	{
		if (toChar != "imposible" && toFloat - static_cast<int>(toFloat) == 0)
		{
			std::cout << "float: " << toFloat << ".0f" << std::endl;
			std::cout << "double: " << toDouble << ".0" << std::endl;
		} 
		else 
		{
			std::cout << "float: " << toFloat << "f" << std::endl;
			std::cout << "double: " << toDouble << std::endl;
		}
	}
}
