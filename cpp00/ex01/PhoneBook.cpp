/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:15:52 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/11 09:56:31 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
}
PhoneBook::~PhoneBook()
{
	
}
	
void PhoneBook::Add()
{
	std::string input = "";
	
	input.clear();
	while (input.empty())
	{
		std::cout << "Insert Name" << std::endl;
		std::cin >> input;
		if (std::cin.eof())
			return ;
		PhoneBook::contacts[i % CONTACTS_AMOUNT].SetName(input);
	}

	input.clear();
	while (input.empty())
	{
		std::cout << "Insert Surname" << std::endl;
		std::cin >> input;
		if (std::cin.eof())
			return ;
		PhoneBook::contacts[i % CONTACTS_AMOUNT].SetSurname(input);
	}

	input.clear();
	while (input.empty())
	{
		std::cout << "Insert Nick" << std::endl;
		std::cin >> input;
		if (std::cin.eof())
			return ;
		PhoneBook::contacts[i % CONTACTS_AMOUNT].SetNick(input);
	}

	input.clear();
	while (input.empty())
	{
		std::cout << "Insert Secret" << std::endl;
		std::cin >> input;
		if (std::cin.eof())
			return ;
		PhoneBook::contacts[i % CONTACTS_AMOUNT].SetSecret(input);
	}
	
	input.clear();
	while (input.empty())
	{
		std::cout << "Insert Num" << std::endl;
		std::cin >> input;
		if (std::cin.eof())
			return ;
		PhoneBook::contacts[i % CONTACTS_AMOUNT].SetNum(input);
	}
	++i;
}

static void PrintContactData(std::string str)
{
	if (str.length() <= 10)
        std::cout << std::right << std::setw(10) << str;
    else
    {
        str =  str.substr(0,9) + ".";
        std::cout << std::right << std::setw(10) << str;
    }
		std::cout << "|";
}

void PhoneBook::Search()
{
	int c_id = 0;
	
	std::cout << "        id|      name|   surname|  nickname|" << std::endl;
	while (c_id < CONTACTS_AMOUNT &&!PhoneBook::contacts[c_id].GetName().empty())
	{
        std::cout << std::right << std::setw(10) << c_id + 1 << "|";
		PrintContactData(PhoneBook::contacts[c_id].GetName());
		PrintContactData(PhoneBook::contacts[c_id].GetSurname());
		PrintContactData(PhoneBook::contacts[c_id].GetNick());
		std::cout << std::endl;
		++c_id;
	}

	//___________________________________

	std::string input;
	int num;

	std::cout << "Insert Index" << std::endl;
	std::cin >> input;
	if (std::cin.eof())
		return ;

	num = atoi(input.c_str());
	while (num > CONTACTS_AMOUNT || num < 1)
	{
		std::cout << "Wrong Index\n";
		std::cin >> input;
		if (std::cin.eof())
			return ;
		num = atoi(input.c_str());
	}

	if (PhoneBook::contacts[num - 1].GetName().empty())
	{
		std::cout <<"No contact" << std::endl;
		return ;
	}
	
	//___________________________________

	std::cout << "        id|      name|   surname|  nickname|     phone|    secret|" << std::endl;
    std::cout << std::right << std::setw(10) << num << "|";
	PrintContactData(PhoneBook::contacts[num - 1].GetName());
	PrintContactData(PhoneBook::contacts[num - 1].GetSurname());
	PrintContactData(PhoneBook::contacts[num - 1].GetNick());
	PrintContactData(PhoneBook::contacts[num - 1].GetNum());
	PrintContactData(PhoneBook::contacts[num - 1].GetSecret());
	std::cout << std::endl;
}
