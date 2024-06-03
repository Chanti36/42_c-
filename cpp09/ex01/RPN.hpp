/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:13:02 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/06/03 10:56:29 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstdlib>
# include <iostream>
# include <sstream>
# include <string>
# include <stack>
# include <string>
# include <exception>

class RPN 
{
    public:
        RPN();
        ~RPN();
        RPN(const RPN & copy);
        RPN &operator=(const RPN & other);

        static long long    calculate(const std::string& expr);

        class NoResultException : public std::exception 
        {
            public:
                virtual const char* what() const throw();  
        };

        class DivisionByZeroException : public std::exception 
        {
            public:
                virtual const char* what() const throw();  
        };
};