/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:17:44 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/09 10:39:50 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{

}

Point::Point(const float x, const float y) : _x(x) , _y(y)
{

}

Point::Point(Point const &copy) : _x(copy._x), _y(copy._y)
{

}

Point::~Point()
{
	
}

Point&	Point::operator=(const Point& other)
{
	(Fixed)_x = other.get_X();
	(Fixed)_y = other.get_Y();
	return (*this);
}

Fixed Point::get_X(void) const
{
	return (_x);
}

Fixed Point::get_Y(void) const
{
	return (_y);
}
