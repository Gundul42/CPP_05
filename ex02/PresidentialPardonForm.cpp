/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:06 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 15:23:13 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form(), _target("Default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form(target + "_PresidentalPardonator", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & cpy): Form(cpy)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & right)
{
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGrade2Exec())
		throw Form::GradeTooLowException();
	if (this->isSigned())
	{
		std::cout << this->getTarget() << " has been pardoned by ";
       		std::cout << "Zafod Beeblebrox !" << std::endl;
	}
	else
		std::cout << this->getName() << " has not been signed yet" << std::endl;
}
