/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:38:49 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/09 11:36:16 by sgil-moy         ###   ########.fr       */
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

Fixed&	Fixed::operator=(const Fixed &other) 
{
	_value = other.getRawBits();
	return (*this);
}


bool	Fixed::operator<(const Fixed &other)
{
	return (_value < other._value);
}

bool	Fixed::operator>(const Fixed &other)
{
	return (_value > other._value);
}

bool	Fixed::operator<=(const Fixed &other)
{
	return (_value <= other._value);
}

bool	Fixed::operator>=(const Fixed &other)
{
	return (_value >= other._value);
}

bool	Fixed::operator==(const Fixed &other)
{
	return (_value == other._value);
}

bool	Fixed::operator!=(const Fixed &other)
{
	return (_value != other._value);
}

Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed res;

	res._value = _value + other._value;
	return (res);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed res;

	res._value = _value - other._value;
	return (res);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed res;

	res._value = (_value * other._value) / (pow(2, _bits));
	return (res);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed res;

	res._value = (_value / other._value) * (pow(2, _bits));
	return (res);
}

Fixed	&Fixed::operator++(void)
{
	_value += 1;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	_value -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	
	(*this)._value--;
	return (tmp);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	
	(*this)._value++;
	return (tmp);
}

float Fixed::toFloat( void ) const
{
	return (_value / pow(2, _bits));
}

int Fixed::toInt( void ) const
{
	return (_value / static_cast<int>(pow(2, _bits)));
}

int Fixed::getRawBits( void ) const
{
	return (_value);
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

Fixed &Fixed::min(Fixed &fix1, Fixed &fix2)
{
	return (fix1.getRawBits() > fix2.getRawBits() ? fix2 : fix1);
}

const Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	return (fix1.getRawBits() > fix2.getRawBits() ? fix2 : fix1);
}

Fixed &Fixed::max(Fixed &fix1, Fixed &fix2)
{
	return (fix1.getRawBits() > fix2.getRawBits() ? fix1 : fix2);
}

const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	return (fix1.getRawBits() > fix2.getRawBits() ? fix1 : fix2);
}
