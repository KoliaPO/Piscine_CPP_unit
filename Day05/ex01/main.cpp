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

int main ()
{
try
{
	Bureaucrat b1("Vasilyi", 135);
	Bureaucrat b2("Petro", 1);
	Bureaucrat b3("Sasha", 150);
	Bureaucrat b4("Stas", 42);
	Form form("PRIKOL", 12, 150);
	b1.signForm(form);
	b1.incrementGrade();
}
catch (std::exception & e)
{
	std::cout << "User idiot!!" << std::endl;
	std::cout << e.what() << std::endl;
	return (0);
	
}
	return (0);
}
