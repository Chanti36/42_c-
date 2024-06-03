/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:18:40 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/24 16:28:48 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

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

		void		signForm(Form form);

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