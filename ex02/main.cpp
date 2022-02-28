/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/02/28 17:57:32 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
		Bureaucrat			john("John", 11);
		Bureaucrat			momo("Momo", 21);
		ShrubberyCreationForm	neu("Home");
		RobotomyRequestForm	robo("Drillit");
		PresidentialPardonForm	sry("SoSorry");

		john.setGrade(100);
		momo.setGrade(129);
		std::cout << john << std::endl << momo << std::endl;
		std::cout << john << std::endl << momo << std::endl;
		std::cout << neu << std::endl;
		john.signForm(neu);
		john.setGrade(213);
		john.signForm(neu);
		john.incGrade();
		john.signForm(neu);
		neu.execute(john);
		john.setGrade(3);
		john.signForm(robo);
		std::cout << robo << std::endl;
		robo.execute(john);
		std::cout << robo << std::endl;
		sry.execute(john);
		std::cout << sry << std::endl;
	return (0);
}
