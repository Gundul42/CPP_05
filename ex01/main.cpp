/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/02/28 11:26:55 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
		Bureaucrat	john("John", 11);
		Bureaucrat	momo("Momo", 21);
		Form			neu("Test", 12,120);
		Form			cpy;

		john.setGrade(100);
		momo.setGrade(129);
		cpy = neu;
		std::cout << john << std::endl << momo << std::endl;
		momo = john;
		std::cout << john << std::endl << momo << std::endl;
		std::cout << neu << std::endl;
		john.signForm(neu);
		john.setGrade(13);
		john.signForm(neu);
		john.incGrade();
		john.signForm(neu);
		john.signForm(cpy);
	return (0);
}
