/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:37:43 by graja             #+#    #+#             */
/*   Updated: 2022/02/24 12:16:46 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <stdexcept>

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
		void			incGrade(int update);
		void			decGrade(int update);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * err() const throw()
				{
					return ("ERROR: graded too high !\n");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * err() const throw()
				{
					return ("ERROR: graded too low !\n");
				}
		};

};

std::ostream&	operator<<(std::ostream &o, Bureaucrat &top);

#endif
