// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: myprosku <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/04/10 12:44:04 by myprosku          #+#    #+#             //
//   Updated: 2018/04/10 12:44:05 by myprosku         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

int main ()
{
	Bureaucrat hermes1 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob1 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes2 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob2 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes3 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob3 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes4 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob4 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes5 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob5 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes6 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob6 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes7 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob7 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes8 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob8 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes9 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob9 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes10 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob10 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes11 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob11 = Bureaucrat("Bobby Bobson", 2);
	Bureaucrat hermes12 = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob12 = Bureaucrat("Bobby Bobson", 2);
	CentralBureaucracy cb;

	try
	{
		cb.feedBur(hermes1);
		cb.feedBur(bob1);
		cb.feedBur(hermes2);
		cb.feedBur(bob2);
		cb.feedBur(hermes3);
		cb.feedBur(bob3);
		cb.feedBur(hermes4);
		cb.feedBur(bob4);
		cb.feedBur(hermes5);
		cb.feedBur(bob5);
		cb.feedBur(hermes6);
		cb.feedBur(bob6);
		cb.feedBur(hermes7);
		cb.feedBur(bob7);
		cb.feedBur(hermes8);
		cb.feedBur(bob8);
		cb.feedBur(hermes9);
		cb.feedBur(bob9);
		cb.feedBur(hermes10);
		cb.feedBur(bob10);
		cb.feedBur(hermes11);
		cb.feedBur(bob11);
		cb.feedBur(hermes12);
		cb.feedBur(bob12);
		cb.doBureaucracy();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
