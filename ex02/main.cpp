/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 18:11:03 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
		Bureaucrat			john("John", 1);
		ShrubberyCreationForm	neu("Home");
		RobotomyRequestForm	robo("Drillit");
		RobotomyRequestForm	lollo(robo);
		PresidentialPardonForm	sry("Mr. BlackSheep");
		int					i;

		i = 0;
		john.signForm(lollo);
		while (i < 25)
		{
			john.executeForm(lollo);
			i++;
		}
		john.signForm(neu);
		john.executeForm(neu);
	return (0);
}
