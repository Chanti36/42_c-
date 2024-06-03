/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:14:22 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/06/03 15:05:57 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <exception>
# include <iostream>
# include <algorithm>
# include <ctime>
# include <vector>
# include <list>
# define MICROSECOND 100000

class PmergeMe 
{
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& copy);
        PmergeMe &operator=(const PmergeMe& other);

        void sortVec(int argc, char **argv);
        void sortList(int argc, char **argv);

        class InvalidElementException : public std::exception 
        {
            public:
                virtual const char* what() const throw();  
        };
};
