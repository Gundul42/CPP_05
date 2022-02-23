/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:03:02 by graja             #+#    #+#             */
/*   Updated: 2022/02/23 13:04:25 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//constructors
Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{}

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

void			Bureaucrat::setGrade(int updated)
{
	this->_grade = updated;
}

void			Bureaucrat::incGrade(void)
{
	this->_grade--;
}

void			Bureaucrat::decGrade(void)
{
	this->_grade++;
}

//OutputStream Overload
std::ostream &	operator<<(std::ostream &o, Bureaucrat &top)
{
	o << top.getName() << " with bureaucrat grade of: " << top.getGrade();
	return (o);
}
