/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:00:17 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/27 11:13:41 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
	    typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() 
    {
        return (this->c.begin()); 
    }
	iterator end()
    {
        return (this->c.end()); 
    }
};