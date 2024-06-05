/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:42:08 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/02 12:48:21 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
private:
	std::string _type;
	
public:
	WrongCat();
	~WrongCat();
	WrongCat( const WrongCat& src);
	WrongCat & operator = (WrongCat const & other);

	void makeSound() const;
	std::string getType() const;
};

