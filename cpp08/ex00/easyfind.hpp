/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:15:49 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/27 10:20:53 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <algorithm>

template < typename T >
void    easyFind(T & container, int val)
{
    if (std::find(container.begin(), container.end(), val) != container.end())
        std::cout << "Found." << std::endl;
    else
        std::cout << "Not found." << std::endl;
}