/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:02:02 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 15:11:18 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	private:
		const std::string	_target;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & cpy);
		~RobotomyRequestForm(void);

		RobotomyRequestForm & operator=(const RobotomyRequestForm & right);

		void			execute(Bureaucrat const & executor) const;
		std::string	getTarget(void) const;
};

#endif
