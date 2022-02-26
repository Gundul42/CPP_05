/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:03:02 by graja             #+#    #+#             */
/*   Updated: 2022/02/26 13:55:16 by graja            ###   ########.fr       */
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
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 150;
		std::cout << "Grade set to a default of 150" << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy): _name(cpy._name + "_cpy")
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

void			Bureaucrat::incGrade(void)
{
	try
	{
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void			Bureaucrat::decGrade(void)
{
	try
	{
		if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void			Bureaucrat::setGrade(int grade)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

//OutputStream Overload part of std::string
std::ostream &	operator<<(std::ostream &o, Bureaucrat &top)
{
	o << top.getName() << " with bureaucrat grade of: " << top.getGrade();
	return (o);
}
