/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:06 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 15:03:30 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form(), _target("Default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form(target + "_ShrubberyCreator", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy): Form(cpy)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & right)
{
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGrade2Exec())
		throw Form::GradeTooLowException();
	if (this->isSigned())
		std::cout << this->getTarget() << " executed by " << executor.getName() << std::endl;
	else
		std::cout << this->getName() << " has to be signed first" << std::endl;
}
