/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:27:33 by graja             #+#    #+#             */
/*   Updated: 2022/03/03 14:50:18 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Form names are:
// 			Shrubbery_Creation
// 			Robotomy_Request
//			Presidential_Pardon
//

#include "Intern.hpp"

int	main(void)
{
	Form		*test;
	Bureaucrat	bernd("Bernd", 10);
	Intern		slave;

	test = slave.makeForm("Shubbery_Creation", "Kantor");
	test = slave.makeForm("Robotomy_Request", "Bender");
	if (!test)
		return (0);
	bernd.signForm(*test);
	bernd.executeForm(*test);
	delete test;
	test = slave.makeForm("Presidential_Pardon", "Gundul");
	if (!test)
		return (0);
	bernd.signForm(*test);
	bernd.executeForm(*test);
	bernd.setGrade(5);
	bernd.executeForm(*test);
	delete test;
	return (0);
}
