/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:51:30 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/27 10:23:30 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int>	_vector;
		long unsigned int	_size;
		Span();

	public:
		Span(unsigned int size);
		Span(Span const & copy);
		Span &operator = (Span const & other);
		~Span();

		void	addNumber(int num);
		void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int	shortestSpan();
		int	longestSpan();

		int	maxnumber();
		int	minnumber();

		class maxsizereached: public std::exception
		{
			public: const char * what() const throw()
			{
				return ("Vector is full"); 
			}
		};

		class notfound: public std::exception
		{
			public: const char * what() const throw()
			{
				return ("Element is not found"); 
			}
		};
};