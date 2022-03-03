/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/03/03 09:08:17 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
		Bureaucrat			john("John", 70);
		Bureaucrat			momo("Momo", 7);
		ShrubberyCreationForm	neu("Home");
		RobotomyRequestForm	robo("Mesin");
		PresidentialPardonForm	sry("Mr. BlackSheep");
		int					i;

		i = 0;
		john.signForm(robo);
		while (i < 5)
		{
			momo.executeForm(robo);
			i++;
		}
		john.signForm(neu);
		john.executeForm(neu);
		john.signForm(sry);
		momo.executeForm(sry);
		john.setGrade(25);
		momo.incGrade();
		momo.incGrade();
		john.signForm(sry);
		momo.executeForm(sry);
	return (0);
}
