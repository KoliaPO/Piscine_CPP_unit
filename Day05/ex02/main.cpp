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

int main ()
{
try
{
	Bureaucrat b1("Vasilyi", 135);
	Bureaucrat b2("Petro", 1);
	Bureaucrat b3("Sasha", 150);
	Bureaucrat b4("Stas", 42);
	PresidentialPardonForm f1("KORKA");
	RobotomyRequestForm f2("HOME");
	ShrubberyCreationForm f3("PROBLE");
	b2.signForm(f3);
	//b2.signForm(f3);
	//b2.signForm(f2);
	//b2.signForm(f2);
	f3.execute(b2);
	b2.executeForm(f2);
	//f2.execute(b2);
}
catch (std::exception & e)
{
	std::cout << "User idiot!!" << std::endl;
	std::cout << e.what() << std::endl;
}
	return (0);
}
