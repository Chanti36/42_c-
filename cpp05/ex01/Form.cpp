/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:35:12 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/24 16:29:55 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1) 
{
	
}

Form::Form( const std::string& name, int gradeToSign, int gradeToExecute ) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) 
{
    if ( gradeToSign < 1 )
        throw Form::GradeTooHighException();
    if ( gradeToSign > 150 )
        throw Form::GradeTooLowException();	
}

Form::Form(const Form& src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) 
{

}

Form::~Form() 
{
	
}

Form & Form::operator=( const Form& form ) 
{
	_signed = form.getSigned();
	return (*this);
}

std::string Form::getName() const 
{
    return (_name);
}

bool   Form::getSigned() const 
{
    return (_signed);
}

int   Form::getGradeToSign() const 
{
    return (_gradeToSign);
}

int   Form::getGradeToExecute() const 
{
    return (_gradeToExecute);
}

void	Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw (GradeTooLowException());
	_signed = true;
}

std::ostream & operator << ( std::ostream& os, const Form& form)
{
	os << "Form name: " << form.getName() << std::endl << "Grade to sign: " << form.getGradeToSign() << std::endl << "Grade to execute: " << form.getGradeToExecute();
    return (os);
}