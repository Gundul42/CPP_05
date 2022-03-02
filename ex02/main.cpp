/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 15:26:45 by graja            ###   ########.fr       */
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
		PresidentialPardonForm	sry("Mr. BlackSheep");

		john.signForm(robo);
		john.executeForm(robo);
	return (0);
}
