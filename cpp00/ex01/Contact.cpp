/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:04:13 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/11 09:59:30 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

	Contact::Contact()
	{
		Contact::name.clear();
		Contact::surname.clear();
		Contact::nick.clear();
		Contact::secret.clear();
		Contact::number.clear();
	}
	Contact::~Contact()
	{
		
	}

	void Contact::SetName(std::string c_name)
	{
		Contact::name = c_name;
	}

	void Contact::SetSurname(std::string c_surname)
	{
		Contact::surname = c_surname;
	}

	void Contact::SetNick(std::string c_nick)
	{
		Contact::nick = c_nick;
	}

	void Contact::SetSecret(std::string c_secret)
	{
		Contact::secret = c_secret;
	}

	void Contact::SetNum(std::string c_num)
	{
		Contact::number = c_num;
	}

	std::string Contact::GetName() 
	{
		return(this->name);
	}
	std::string Contact::GetSurname()
	{
		return (this->surname);
	}
	std::string Contact::GetNick()
	{
		return (this->nick);
	}
	std::string Contact::GetSecret()
	{
		return (this->secret);
	}
	std::string Contact::GetNum()
	{
		return (this->number);
	}