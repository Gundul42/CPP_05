/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:06 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 12:50:43 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form()
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & cpy): Form(cpy)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & right)
{
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->isSigned())
		std::cout << this->getName() << " executed by " << executor.getName() << std::endl;
	else
		std::cout << this->getName() << " has to be signed first" << std::endl;
}
