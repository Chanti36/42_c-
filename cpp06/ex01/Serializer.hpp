/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:19:34 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/20 11:00:22 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <stdint.h>
# include <iostream>

typedef struct t_Data
{
	int	val;
}	Data;

class Serializer
{
	public:
		static uintptr_t serialize(Data * ptr);
		static Data* deserialize(uintptr_t raw);
};
