/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:47:13 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/11 09:58:46 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#define CONTACTS_AMOUNT 8

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook 
{
	private:
		Contact contacts[CONTACTS_AMOUNT];
		int i;
	public :
		PhoneBook();
		~PhoneBook();

		void	Add();
		void	Search();
};


#endif