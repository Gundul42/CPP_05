/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:51:25 by graja             #+#    #+#             */
/*   Updated: 2022/03/03 14:51:03 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{}

Intern::Intern(const Intern & cpy)
{
	*this = cpy;
}

Intern::~Intern(void)
{}

Intern & Intern::operator=(const Intern & right)
{
	*this = right;
	return (*this);
}

Form *Intern::makeForm(const std::string & name, const std::string & target)
{
	Form	*form[3];
	int		i;
	int		sav;

	i = 0;
	sav = -1;
	form[0] = new ShrubberyCreationForm(target);
	form[1] = new RobotomyRequestForm(target);
	form[2] = new PresidentialPardonForm(target);
	while (i < 3)
	{
		if (form[i]->getName() == name)
			sav = i;
		else
			delete form[i];
		i++;
	}
	if (sav >= 0)
	{
		std::cout << "Intern creates " << name << " for " << target << std::endl;
		return (form[sav]);
	}
	std::cout << "There is no form >" << name << "< form ! Go and make some coffee !" << std::endl;
	return (NULL);
}
