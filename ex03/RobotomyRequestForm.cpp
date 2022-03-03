/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:06 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 18:20:14 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib> 

RobotomyRequestForm::RobotomyRequestForm(void): Form(), _target("Default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("Robotomy_Request", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & cpy):
	Form(cpy), _target(cpy.getTarget() + "_cpy")
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
	if (!(this->isSigned()))
		std::cout << this->getName() << " has to be signed first" << std::endl;
	else
	{
		std::cout << "******************************************" << std::endl;
		std::cout << "BzzzZzzzZZZzzzZ BZzZZzzzzzzZzzzzz BzzzzZzz" << std::endl;
		std::cout << "******************************************" << std::endl;
		if ((rand() % 2))
		{
			std::cout << this->getTarget() << " was successfully";
			std::cout << " robotomized !" << std::endl << std::endl;
		}
		else
		{
			std::cout << this->getTarget() << " FAILED to be";
			std::cout << " robotomized !" << std::endl << std::endl;
		}
	}
}
