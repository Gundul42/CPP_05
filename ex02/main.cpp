/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 13:56:05 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
		Bureaucrat			john("John", 150);
		ShrubberyCreationForm	neu("Home");
		RobotomyRequestForm	robo("Drillit");
		PresidentialPardonForm	sry("SoSorry");

		john.signForm(neu);
		john.setGrade(146);
		john.signForm(neu);
		john.incGrade();
		john.setGrade(3);
		john.signForm(robo);
		john.signForm(sry);
		john.setGrade(45);
		john.executeForm(sry);
		john.executeForm(robo);
	return (0);
}
