/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:06 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 14:29:56 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & cpy): Form(cpy)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & right)
{
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGrade2Exec())
		throw Form::GradeTooLowException();
	if (this->isSigned())
	{
		std::cout << executor.getName() << " has been pardoned by ";
       		std::cout << "Zafod Beeblebrox" << std::endl;
	}
	else
		std::cout << this->getName() << " has not been signed yet" << std::endl;
}
