/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:02:02 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 15:12:08 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	private:
		const std::string	_target;

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm & cpy);
		~PresidentialPardonForm(void);

		PresidentialPardonForm & operator=(const PresidentialPardonForm & right);

		void			execute(Bureaucrat const & executor) const;
		std::string	getTarget(void) const;
};

#endif
