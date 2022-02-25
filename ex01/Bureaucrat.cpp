/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:03:02 by graja             #+#    #+#             */
/*   Updated: 2022/02/25 12:37:38 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//constructors
Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy)
{
	*this = cpy;
}

//Destructor
Bureaucrat::~Bureaucrat(void)
{}

//assignment overload
Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & right)
{
	this->_grade = right._grade;
	return (*this);
}

//methods
std::string const	Bureaucrat::getName(void)
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void)
{
	return (this->_grade);
}

void			Bureaucrat::incGrade(int update)
{
	if (update < 0 || this->_grade - update < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= update;
}

void			Bureaucrat::decGrade(int update)
{
	if (update < 0 || this->_grade + update > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += update;
}

//OutputStream Overload part of std::string
std::ostream &	operator<<(std::ostream &o, Bureaucrat &top)
{
	o << top.getName() << " with bureaucrat grade of: " << top.getGrade();
	return (o);
}
