/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:19:58 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/09 10:35:23 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>


class Fixed
{
  private:
    int					_value;
    static int const	_bits = 8;

  public:
	Fixed();
	Fixed(Fixed const &copy);
	Fixed(const int integer);
	Fixed(const float float_number);
	~Fixed();
	
    Fixed&	operator=(const Fixed& other);
	bool	operator<(const Fixed &other);
	bool	operator>(const Fixed &other);
	bool	operator<=(const Fixed &other);
	bool	operator>=(const Fixed &other);
	bool	operator==(const Fixed &other);
	bool	operator!=(const Fixed &other);
	Fixed	operator+(const Fixed &other);
	Fixed	operator-(const Fixed &other);
	Fixed	operator*(const Fixed &other);
	Fixed	operator/(const Fixed &other);
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator--(int);
	Fixed	operator++(int);
	
	float	toFloat() const;
	int		toInt() const;
	int		getRawBits() const;
	void	setRawBits(int const raw);

	static	Fixed &min(Fixed &fix1, Fixed &fix2);
	static	const Fixed &min(const Fixed &fix1, const Fixed &fix2);
	static	Fixed &max(Fixed &fix1, Fixed &fix2);
	static	const Fixed &max(const Fixed &fix1, const Fixed &fix2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fi);
#endif