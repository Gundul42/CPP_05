/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/02/26 14:20:02 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	john("John", 160);
	Bureaucrat	momo("Momo", 21);
	Bureaucrat	momo2(momo);

	john.setGrade(1);
	momo.setGrade(-129);
	std::cout << john << std::endl << momo << std::endl;
	std::cout << "-------------------------------" << std::endl;
	momo = john;
	std::cout << john << std::endl << momo << std::endl;
	std::cout << momo2 << std::endl;
	return (0);
}
