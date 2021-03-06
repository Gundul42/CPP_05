/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:36 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 12:43:58 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool			_signed;
		const int		_grade2sign;
		const int		_grade2exec;

	public:
		Form(void);
		Form(std::string name, int sign, int exec);
		Form(const Form & cpy);
		virtual ~Form(void);

		Form & operator=(const Form & right);

		std::string	getName(void) const;
		int			getGrade2Sign(void) const;
		int			getGrade2Exec(void) const;
		bool		isSigned(void) const;
		void		beSigned(const Bureaucrat & p);

		virtual void	execute(const Bureaucrat & executor) const = 0;


	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return ("ERROR: Grade too low");
			}
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return ("ERROR: Grade too high");
			}
	};
};

std::ostream& operator<<(std::ostream &o, const Form &top);

#endif
