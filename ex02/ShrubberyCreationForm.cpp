/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:06 by graja             #+#    #+#             */
/*   Updated: 2022/03/02 18:20:32 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void): Form(), _target("Default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("Shrubbery_Creation", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy):
	Form(cpy), _target(cpy.getTarget() + "_cpy")
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & right)
{
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::fstream file;
	int			i;

	i = 0;
	if (executor.getGrade() > this->getGrade2Exec())
		throw Form::GradeTooLowException();
	if (!(this->isSigned()))
		std::cout << this->getName() << " has to be signed first" << std::endl;
	else
	{
		file.open(this->getTarget() + "_shrubbery", std::fstream::out);
		while (i < 4)
		{
			file << "             * *" << std::endl;
			file << "          *    *  *" << std::endl;
			file << "      *  *    *     *  *" << std::endl;
			file << "     *     *    *  *    *" << std::endl;
			file << " * *   *    *    *    *   *" << std::endl;
			file << " *     *  *    * * .#  *   *" << std::endl;
			file << " *   *     * #.  .# *   *" << std::endl;
			file << "  *      #.  #: #  * *    *" << std::endl;
			file << " *   * *  #. ##        *" << std::endl;
			file << "   *        ###" << std::endl;
			file << "             ###" << std::endl;
			file << "              ##." << std::endl;
			file << "              .##:" << std::endl;
			file << "              :###" << std::endl;
			file << "              ;###" << std::endl;
			file << "            ,####." << std::endl;
			file << "           .######." << std::endl;
			file << std::endl << std::endl;
			i++;
		}
		file.close();
	}
}
