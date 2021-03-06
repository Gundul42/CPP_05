/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:04:06 by graja             #+#    #+#             */
/*   Updated: 2022/03/20 13:43:21 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Contructors
Form::Form(void): _name("Default form"), _signed(false), _grade2sign(150), _grade2exec(150)
{}

Form::Form(std::string name, int sign, int exec): _name(name), _signed(false), _grade2sign(sign),
		_grade2exec(exec)
{
		if ((this->getGrade2Sign() < 1) || (this->getGrade2Exec() < 1))
			throw Form::GradeTooHighException();
		else if ((this->getGrade2Sign() > 150) || (this->getGrade2Exec() > 150))
			throw Form::GradeTooLowException();
}

Form::Form(const Form & cpy): _name(cpy._name), _signed(cpy._signed), _grade2sign(cpy._grade2sign),
		_grade2exec(cpy._grade2exec)
{
}

Form::~Form(void)
{}

Form & Form::operator=(const Form & right)
{
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

int			Form::getGrade2Sign(void) const
{
	return (this->_grade2sign);
}

int			Form::getGrade2Exec(void) const
{
	return (this->_grade2exec);
}

bool		Form::isSigned(void) const
{
	return (this->_signed);
}

void		Form::beSigned(const Bureaucrat & p)
{
	if (p.getGrade() > this->_grade2sign)
		throw Form::GradeTooLowException();
	else
	{
		this->_signed = true;
		std::cout << p.getName() << " successfully signed " << *this << std::endl;
	}
}

std::ostream & operator<<(std::ostream &o, const Form &top)
{
	o << top.getName();
	if (top.isSigned())
		o << ", signed";
	else
		o << ", unsigned";
	o << ", Grade to sign = " << top.getGrade2Sign() << ", Grade to execute = ";
	o << top.getGrade2Exec();
	return (o);
}
