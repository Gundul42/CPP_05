/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:03:02 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 12:40:20 by graja            ###   ########.fr       */
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
	catch (std::exception &e)
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
std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
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
	catch (std::exception &e)
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
	catch (std::exception &e)
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
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void			Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception & e)
	{
		std::cout << "----------------------------" << std::endl;
		std::cout << e.what() << std::endl;
		std::cout << this->getName() << " could not sign: " << form << std::endl;
		std::cout << this->getName() << " has grade " << this->getGrade() <<  std::endl;
		std::cout << "----------------------------" << std::endl << std::endl;
	}
}

//OutputStream Overload part of std::string
std::ostream &	operator<<(std::ostream &o, const Bureaucrat &top)
{
	o << top.getName() << " with bureaucrat grade of: " << top.getGrade();
	return (o);
}
