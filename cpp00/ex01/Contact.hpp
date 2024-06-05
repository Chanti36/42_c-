/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:02:35 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/04 15:13:13 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact 
{
	private:
		std::string	name;
		std::string	surname;
		std::string	nick;
		std::string	secret;
		std::string	number;

	public:
		Contact();
		~Contact();

		void SetName(std::string c_name);
		void SetSurname(std::string c_surname);
		void SetNick(std::string c_nick);
		void SetSecret(std::string c_secret);
		void SetNum(std::string c_num);

		std::string GetName();
		std::string GetSurname();
		std::string GetNick();
		std::string GetSecret();
		std::string GetNum();
};

#endif