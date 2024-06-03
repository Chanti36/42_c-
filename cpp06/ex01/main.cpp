/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:20:52 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/20 11:03:54 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data*		data = new Data;
	Data		*deserialized;
	uintptr_t	serialized;

	data->val = 42;
	std::cout <<  "value: " << data->val << std::endl;

	serialized = Serializer::serialize(data);
	std::cout <<  "serialized: " << serialized << std::endl;
	
	deserialized = Serializer::deserialize(serialized);
	std::cout << "deserialized: " << deserialized->val << std::endl;
	
	delete (data);
	return (0);
}