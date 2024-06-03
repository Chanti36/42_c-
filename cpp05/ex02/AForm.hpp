/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	
	public:
	    AForm();
	    AForm( const std::string& name, int gradeToSign, int gradeToExecute );
	    AForm( const AForm& src );
	    ~AForm();
	    AForm&   operator=( const AForm& rhs );

	    std::string	getName() const;
	    bool		getSigned() const;
	    int			getGradeToSign() const;
		int			getGradeToExecute() const;

		void		setSign(bool sign);

		void			beSigned(Bureaucrat bureaucrat);
		virtual void	execute(const Bureaucrat& bureaucrat) const = 0;


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
		class NotSignedException : public std::exception 
		{
	        public:
    	        virtual const char* what() const throw() { return "Form not signed"; }
	    };
};

std::ostream & operator << (std::ostream& o, const AForm& AForm);
