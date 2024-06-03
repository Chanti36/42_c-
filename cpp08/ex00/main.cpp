/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:23:37 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/27 10:20:58 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( int argc, char ** argv )
{
    if ( argc != 2 )
        return (std::cout << "Wrong args\n", 1);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<int>  vect(arr, arr + sizeof(arr) / sizeof(int));
    std::list<int>    list(arr, arr + sizeof(arr) / sizeof(int));

    easyFind(vect, std::atoi(argv[1]));
    easyFind(list, std::atoi(argv[1]));

    return (0);
}
