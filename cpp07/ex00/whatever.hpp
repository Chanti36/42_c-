/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:47:14 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/24 10:24:31 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

template <typename Var>
void    swap(Var &x, Var &y)
{
	Var aux = x;
	x = y;
	y = aux;
}

template <typename Var>
const Var	&min(const Var &x ,const Var &y)
{
	return (x < y ? x : y);
}

template <typename Var>
const Var	& max(const Var & x ,const Var & y)
{
	return (x > y ? x : y); 
}
