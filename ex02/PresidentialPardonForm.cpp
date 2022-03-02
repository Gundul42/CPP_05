/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:06 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 12:51:12 by graja            ###   ########.fr       */
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
	if (this->isSigned())
		std::cout << this->getName() << " executed by " << executor.getName() << std::endl;
	else
		std::cout << this->getName() << " has to be signed first" << std::endl;
}
