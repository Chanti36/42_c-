/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:33:18 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/04/24 16:27:06 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name ("default"), _grade(1)
{

}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw (GradeTooLowException());
	if (_grade < 1)
		throw (GradeTooHighException());
}

Bureaucrat::Bureaucrat( const Bureaucrat& src ) : _name(src._name), _grade(src._grade)
{

}

Bureaucrat::~Bureaucrat()
{	

}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &other)
{
	if (this != &other)
		_grade = other._grade;
	return (*this);
}

std::string	Bureaucrat::getName()const
{
	return (_name);
}

int	Bureaucrat::getGrade()const
{
	return (_grade);	
}

void	Bureaucrat::increaseGrade()
{
	if (_grade - 1 < 1)
		throw (GradeTooHighException());
	_grade--;
}

void	Bureaucrat::decreaseGrade()
{
	if (_grade + 1 > 150)
		throw (GradeTooLowException());	
	_grade++;
}

void	Bureaucrat::signForm(Form form)
{
	try 
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
    }
	catch (Form::GradeTooLowException &e) 
	{
		std::cout << _name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
