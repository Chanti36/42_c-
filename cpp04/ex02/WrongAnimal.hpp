/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:35:44 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/02 12:48:18 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
private:
	std::string _type;
	
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal( const WrongAnimal& src);
	WrongAnimal & operator = (WrongAnimal const & other);

	void makeSound() const;
	std::string getType() const;
};

