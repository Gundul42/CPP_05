/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/03/01 18:42:37 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
		Bureaucrat			john("John", 11);
		ShrubberyCreationForm	neu("Home");
		RobotomyRequestForm	robo("Drillit");
		PresidentialPardonForm	sry("SoSorry");

		john.setGrade(146);
		john.signForm(neu);
		john.setGrade(213);
		john.signForm(neu);
		john.incGrade();
		john.signForm(neu);
		neu.execute(john);
		john.setGrade(3);
		john.signForm(robo);
		robo.execute(john);
		sry.execute(john);
		john.signForm(sry);
	return (0);
}
