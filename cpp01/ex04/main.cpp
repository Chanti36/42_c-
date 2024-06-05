/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:02:32 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/25 09:51:34 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	ReplaceFile(std::string fileName, std::string s1, std::string s2)
{
	std::string line;
	std::string str;
	size_t i;
    
	std::ifstream myFile(fileName);
	if (!myFile.is_open())
		return (std::cout << "Error: bad file" << std::endl, 1);

	std::ofstream replaceFile(fileName + ".replace");
	if (!replaceFile.is_open())
		return (std::cout << "Error: fatal" << std::endl, 1);
	while (getline(myFile, line))
	{
		str += line;
		if (!myFile.eof())
			str += '\n';
	}

	i = str.find(s1);
	while (i < str.length())
	{
		str.erase(i, s1.length());
		str.insert(i, s2);
		i = str.find(s1, i + s2.length()); 
	}
	replaceFile << str;
	replaceFile.close();
	myFile.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Error: bad arguments" << std::endl, 1);
	return 	(ReplaceFile(argv[1], argv[2], argv[3]));
}
