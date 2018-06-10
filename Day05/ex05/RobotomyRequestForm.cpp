/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:46:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/10 12:46:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	_target = obj.getTartget();
	return *this;
}

std::string RobotomyRequestForm::getTartget() const
{
	return _target;
}

void RobotomyRequestForm::executeType() const
{
	int rNUm = std::rand() % 2;
	if (rNUm == 1)
		std::cout << _target << " has been robotomized successfully !!" << std::endl;
	else
		std::cout << "This is a failure, Dude !" << std::endl;
}
