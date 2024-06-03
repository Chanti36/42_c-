/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:24:30 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/05/24 10:44:24 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>

template <class T>
class	Array
{
	private:
		T*	_array;
		unsigned int _size;

	public:
		Array() : _size(0) 
		{
			_array = new T[0];
		}

		Array(unsigned int size) : _size(size) 
		{
			_array = new T[size];
		}

		Array(Array const &copy) 
		{
			_array = NULL;
			*this = copy;
		}

		Array &operator=(Array const &other) 
		{
			if (_array)
				delete[] _array;
	
			_size = other._size;
			_array = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_array[i] = other._array[i];

			return (*this);
		}

		virtual ~Array()
		{
			if (_array)
				delete[] _array;
		}

		T &operator[](unsigned int i)
		{
			if (i < _size)
				return _array[i]; else throw Array<T>::InvalidIndexException(); 
		}
		
		class	InvalidIndexException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

template <typename T>
const char	*Array<T>::InvalidIndexException::what() const throw()
{
	return ("Error: Invalid index");
}