/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:51:21 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/27 10:55:24 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span(unsigned int num) : _size(num) 
{

}

Span::Span(Span const &copy) 
{
	_vector = copy._vector;
	_size = copy._size;
}

Span &Span::operator=(Span const &other)
{
	_vector = other._vector;
	_size = other._size;
	return (*this);
}

Span::~Span()
{
	
}

void	Span::addNumber(int num)
{
	if (_vector.size() < _size)
		_vector.push_back(num);
	else
		throw maxsizereached();
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	std::vector<int> tmp(start, end);

	if (tmp.size() > (_size - _vector.size()))
		throw maxsizereached();
	std::copy(tmp.begin(), tmp.end(), std::back_inserter(_vector));
}


int	Span::maxnumber()
{
	if (_vector.size() < 1)
		throw notfound();

	int	aux = *_vector.begin();

	for (std::vector<int>::iterator i = _vector.begin(); i < _vector.end(); i++)
	{
		if (aux < *i)
			aux = *i;
	}
	return (aux);
}

int	Span::minnumber()
{
	if (_vector.size() < 1)
		throw notfound();
		
	int	aux = *_vector.begin();
	
	for (std::vector<int>::iterator i = _vector.begin(); i < _vector.end(); i++)
	{
		if (aux > *i)
			aux = *i;
	}
	return (aux);
}

int	Span::longestSpan()
{
	return (maxnumber() - minnumber());
}

int	Span::shortestSpan()
{
	int aux = longestSpan();
	
	for (std::vector<int>::iterator	i = _vector.begin(); i < _vector.end(); i++)
	{
		for (std::vector<int>::iterator	j = _vector.begin(); j < _vector.end(); j++)
		{
			if (i == j)
				continue ;
			if (*i > *j && *i - *j < aux)
				aux = *i - *j;
			else if (*i < *j && *j - *i < aux)
				aux = *j - *i;
		}
	}
	return (aux);
}
