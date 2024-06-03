/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:35:14 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/24 16:29:07 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	
	public:
	    Form();
	    Form( const std::string& name, int gradeToSign, int gradeToExecute );
	    Form( const Form& src );
	    ~Form();
	    Form&   operator=( const Form& rhs );

	    std::string	getName() const;
	    bool		getSigned() const;
	    int			getGradeToSign() const;
		int			getGradeToExecute() const;

		void		beSigned(Bureaucrat bureaucrat);

	    /* ---------------- Exception Classes ---------------- */
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

std::ostream & operator << (std::ostream& o, const Form& form);
