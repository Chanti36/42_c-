/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:16:00 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/03/26 11:40:51 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	
	public:
		Point();
		Point(const float x, const float y);
		Point(Point const &copy);
		~Point();
		Point&	operator=(const Point& other);
		Fixed get_X(void)const;
		Fixed get_Y(void)const;
};

#endif

