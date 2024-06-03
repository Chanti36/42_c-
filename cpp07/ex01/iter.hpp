/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:22:55 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/24 10:26:59 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>
# include <iostream>
# include <cctype>

template <typename Var>
void	iter (Var *array, size_t len, void (*func)(Var &))
{
	if (!array || !func)
		return ;
	
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}
