/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/02/23 13:11:11 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	john("John");
	Bureaucrat	momo("Momo", 5);

	john.incGrade();
	momo.decGrade();
	std::cout << john << std::endl << momo << std::endl;
	momo = john;
	std::cout << john << std::endl << momo << std::endl;

	return (0);
}
