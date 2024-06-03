/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:18:40 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/24 14:25:03 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat( const std::string& name, int grade );
		Bureaucrat( const Bureaucrat& src );
		~Bureaucrat();
		Bureaucrat & operator = (const Bureaucrat &other);

		std::string getName() const;
		int         getGrade() const;
		
		void        increaseGrade();
		void        decreaseGrade();

	//Exceptions
		class GradeTooHighException : public std::exception 
		{
    	    public:
    	        virtual const char* what() const throw() { return "Grade too high"; }
    	};
	    class GradeTooLowException : public std::exception 
		{
    	    public:
        	    virtual const char* what() const throw() { return "Grade too low"; }
	    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);