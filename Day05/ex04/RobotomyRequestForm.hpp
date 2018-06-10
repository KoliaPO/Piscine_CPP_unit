/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:46:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/10 12:46:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:

	std::string _target;

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &obj);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);
	std::string getTartget() const;
	virtual void executeType() const;
};

#endif