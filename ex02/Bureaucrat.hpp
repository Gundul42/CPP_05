/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:37:43 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 13:29:46 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <stdexcept>
# include "Form.hpp"
class Form;

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

		std::string const	getName(void) const;
		int			getGrade(void) const;
		void			setGrade(int grade);
		void			incGrade(void);
		void			decGrade(void);

		void			signForm(Form & form);
		void			executeForm(const Form & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("ERROR: Grade can't be higher than 1");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("ERROR: Grade can't be lower than 150");
				}
		};

};

std::ostream&	operator<<(std::ostream &o, const Bureaucrat &top);

#endif
