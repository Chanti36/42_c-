/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:35:12 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/24 16:29:55 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1) 
{
	
}

AForm::AForm( const std::string& name, int gradeToSign, int gradeToExecute ) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) 
{
    if ( gradeToSign < 1 )
        throw AForm::GradeTooHighException();
    if ( gradeToSign > 150 )
        throw AForm::GradeTooLowException();	
}

AForm::AForm(const AForm& src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) 
{

}

AForm::~AForm() 
{
	
}

AForm & AForm::operator=( const AForm& AForm ) 
{
	_signed = AForm.getSigned();
	return (*this);
}

std::string AForm::getName() const 
{
    return (_name);
}

bool   AForm::getSigned() const 
{
    return (_signed);
}

int   AForm::getGradeToSign() const 
{
    return (_gradeToSign);
}

int   AForm::getGradeToExecute() const 
{
    return (_gradeToExecute);
}

void    AForm::setSign(bool sign)
{
    _signed = sign;
}

void	AForm::beSigned(Bureaucrat bureaucrat) 
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw (GradeTooLowException());
    setSign(true);
}

std::ostream & operator << ( std::ostream& os, const AForm& AForm)
{
	os << "AForm name: " << AForm.getName() << std::endl << "Grade to sign: " << AForm.getGradeToSign() << std::endl << "Grade to execute: " << AForm.getGradeToExecute();
    return (os);
}