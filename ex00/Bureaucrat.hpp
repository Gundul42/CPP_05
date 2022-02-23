/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:37:43 by graja             #+#    #+#             */
/*   Updated: 2022/02/23 13:02:30 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & cpy);
		~Bureaucrat(void);

		Bureaucrat& operator=(Bureaucrat const & right);

		std::string const	getName(void);
		int			getGrade(void);
		void			setGrade(int updated);
		void			incGrade(void);
		void			decGrade(void);
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat &top);

#endif
