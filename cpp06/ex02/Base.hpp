/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:52:38 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/15 11:06:00 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Base 
{
	public:
		virtual ~Base();
};

Base::~Base()
{
	
}

class A : public Base {};
class B : public Base {};
class C : public Base {};
