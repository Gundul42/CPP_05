/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/02/26 14:35:38 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
		Bureaucrat	john("John", 1);
		Bureaucrat	momo("Momo", 21);
		Form			neu("Test", 12,12);
		Form			cpy;

		john.setGrade(100);
		momo.setGrade(129);
		std::cout << john << std::endl << momo << std::endl;
		momo = john;
		std::cout << john << std::endl << momo << std::endl;
		std::cout << neu << std::endl;
		neu = cpy;
		john.setGrade(100);
		std::cout << neu << std::endl;
		std::cout << cpy << std::endl;
		std::cout << momo << " is trying to sign" << std::endl;
		std::cout << neu << std::endl;
		neu.beSigned(momo);
		std::cout << neu << std::endl << std::endl;
		std::cout << john << " is trying to sign" << std::endl;
		std::cout << neu << std::endl;
		john.setGrade(10);
		neu.beSigned(john);
		std::cout << neu << std::endl;
	return (0);
}
