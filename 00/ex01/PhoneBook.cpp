/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:15:52 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/02/22 16:43:37 by sgil-moy         ###   ########.fr       */
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
	std::string input;
	
	std::wcout << "Insert Name" << std::endl;
	while (PhoneBook::contacts[i % 8].GetName().empty())
	{
		std::cin >> input;
		PhoneBook::contacts[i % 8].SetName(input);
	}
		std::wcout << "Insert Surname" << std::endl;
	while (PhoneBook::contacts[i % 8].GetSurname().empty())
	{
		std::cin >> input;
		PhoneBook::contacts[i % 8].SetSurname(input);
	}

	std::wcout << "Insert Nick" << std::endl;
	while (PhoneBook::contacts[i % 8].GetNick().empty())
	{
		std::cin >> input;
		PhoneBook::contacts[i % 8].SetNick(input);
	}
		std::wcout << "Insert Secret" << std::endl;
	while (PhoneBook::contacts[i % 8].GetSecret().empty())
	{
		std::cin >> input;
		PhoneBook::contacts[i % 8].SetSecret(input);
	}
		std::wcout << "Insert Num" << std::endl;
	while (PhoneBook::contacts[i % 8].GetNum().empty())
	{
		std::cin >> input;
		PhoneBook::contacts[i % 8].SetNum(input);
	}
	++i;
}

static void PrintContactData(std::string str)
{
	int i = 0;

	while (i < 9)
	{
		if (str[i])
			std::wcout << str[i];
		else
			break;
		++i;
	}
	if (i < 9)
		while (i < 10)
		{
			std::wcout << " ";	
			++i;
		}
	else
		std::wcout << ".";	
	std::wcout << "|";	
}
	
void PhoneBook::Search()
{
	std::wcout << "id        |name      |surname   |nickname  |" << std::endl;

	for(int c_id = 0; c_id < this->i; ++c_id)
	{
		std::cout << c_id;
		std::cout << "         |";
		PrintContactData(PhoneBook::contacts[c_id].GetName());
		PrintContactData(PhoneBook::contacts[c_id].GetSurname());
		PrintContactData(PhoneBook::contacts[c_id].GetNick());
		std::cout << std::endl;
	}
	//___________________________________
	std::string input;
	int num;
	std::wcout << "Insert Index" << std::endl;
	std::cin >> input;
	num = atoi(input.c_str());
		while (num > 9 || num < 1)
	{
		std::cout << "Wrong Index\n";
		std::cin >> input;
		num = atoi(input.c_str());
	}	
	//___________________________________
	std::wcout << "id        |name      |surname   |nickname  |phone     |secret    |" << std::endl;
	std::cout << num - 1;
	std::cout << "         |";
	PrintContactData(PhoneBook::contacts[num - 1].GetName());
	PrintContactData(PhoneBook::contacts[num - 1].GetSurname());
	PrintContactData(PhoneBook::contacts[num - 1].GetNick());
	PrintContactData(PhoneBook::contacts[num - 1].GetNum());
	PrintContactData(PhoneBook::contacts[num - 1].GetSecret());
	std::cout << std::endl;
}
