/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/02/24 12:28:55 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	john("John", 1);
		Bureaucrat	momo("Momo", 21);

		john.decGrade(100);
		momo.decGrade(129);
		std::cout << john << std::endl << momo << std::endl;
		momo = john;
		std::cout << john << std::endl << momo << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & cth)
	{
		std::cout << cth.err();
	}
	catch (Bureaucrat::GradeTooLowException & cth)
	{
		std::cout << cth.err();
	}
	catch (...)
	{
		std::cout << "Any other exception" << std::endl;
	}
	return (0);
}
