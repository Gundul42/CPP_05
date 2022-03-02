/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:06 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 15:26:30 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form(), _target("Default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form(target + "_RobotomyRequestor", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & cpy): Form(cpy)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & right)
{
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGrade2Exec())
		throw Form::GradeTooLowException();
	if (this->isSigned())
		std::cout << this->getTarget() << " executed by " << executor.getName() << std::endl;
	else
		std::cout << this->getName() << " has to be signed first" << std::endl;
}
