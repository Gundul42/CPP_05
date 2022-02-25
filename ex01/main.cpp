/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/02/25 12:43:50 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	john("John", 1);
		Bureaucrat	momo("Momo", 21);
		Form			neu("Test", 12,12);
		Form			cpy;

		john.decGrade(100);
		momo.decGrade(129);
		std::cout << john << std::endl << momo << std::endl;
		momo = john;
		std::cout << john << std::endl << momo << std::endl;
		std::cout << neu << std::endl;
		neu = cpy;
		john.incGrade(100);
		std::cout << neu << std::endl;
		std::cout << cpy << std::endl;
		std::cout << momo << " is trying to sign" << std::endl;
		std::cout << neu << std::endl;
		neu.beSigned(momo);
		std::cout << neu << std::endl << std::endl;
		std::cout << john << " is trying to sign" << std::endl;
		std::cout << neu << std::endl;
		neu.beSigned(john);
		std::cout << neu << std::endl;
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
