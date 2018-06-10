/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 14:43:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/10 14:43:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &obj)
{
	*this = obj;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(Intern const &obj)
{
	(void)obj;
	return *this;
}

Form *Intern::makeForm(std::string nameForm, std::string target)
{
	Form *form;
	std::string temp;
	std::string forms[] = {"ROBOTOMYREQUEST", "PRESIDENTIALPARDON", "SHRUBBERYCREATION"};
	for (int i = 0; i < (int)nameForm.length(); i++)
	{
		if (nameForm[i] != ' ' && nameForm[i] != '\t')
			temp += (char)std::toupper(nameForm[i]);
	}
	if (forms[0] == temp)
		form = new RobotomyRequestForm(target);
	else if (forms[1] == temp)
		form = new PresidentialPardonForm(target);
	else if (forms[2] == temp)
		form = new ShrubberyCreationForm(target);
	else
		throw Form::NoFormNameException();
	std::cout << "Intern creates " << form->getName() << std::endl;
	return form;
}