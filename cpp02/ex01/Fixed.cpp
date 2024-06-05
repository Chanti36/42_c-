/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:19:47 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/09 10:33:40 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(const float float_number)
{
	_value = roundf(float_number * pow(2, _bits));
}

Fixed::Fixed(const int integer)
{
	_value = integer * static_cast<int>(pow(2, _bits));
}

Fixed::~Fixed() 
{

}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
}

//_________________________________________________________________

float Fixed::toFloat( void ) const
{
    return (_value / pow(2, _bits));
}

int Fixed::toInt( void ) const
{
	return (_value / static_cast<int>(pow(2, _bits)));
}

Fixed& Fixed::operator=(const Fixed &other) 
{
	_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return _value;
}

void Fixed::setRawBits( int const raw )
{
    _value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fi)
{
	os << fi.toFloat();
	return (os);
}
