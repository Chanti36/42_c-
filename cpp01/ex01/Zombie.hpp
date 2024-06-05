/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:31:48 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/22 10:07:04 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
	private:
		std::string	_name;
	public:
		Zombie();
		Zombie(std::string new_name);
		~Zombie();
		void setName(std::string name);
		void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
Zombie	*newZombie(std::string name);

#endif