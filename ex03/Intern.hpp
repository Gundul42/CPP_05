/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:17:08 by graja             #+#    #+#             */
/*   Updated: 2022/03/03 11:00:17 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <iostream>

class Intern
{
	public:
		Intern(void);
		Intern(const Intern & cpy);
		~Intern(void);

		Intern & operator=(const Intern & right);

		Form *makeForm(const std::string & name, const std::string & target);
};

#endif
