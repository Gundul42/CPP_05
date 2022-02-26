/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:36 by graja             #+#    #+#             */
/*   Updated: 2022/02/26 17:37:19 by graja            ###   ########.fr       */
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
		~Form(void);

		Form & operator=(const Form & right);

		std::string	getName(void);
		int			getGrade2Sign(void);
		int			getGrade2Exec(void);
		bool		isSigned(void);
		void		beSigned(Bureaucrat p);

	class Exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return ("ERROR: Form class exception");
			}
	};

	class GradeTooLowException : public Form::Exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return ("ERROR: Grade too low");
			}
	};

	class GradeTooHighException : public Form::Exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return ("ERROR: Grade too high");
			}
	};
};

std::ostream& operator<<(std::ostream &o, Form &top);

#endif
