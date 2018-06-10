/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 19:57:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/12 13:45:31 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *generate(void)
{
	std::srand(time(NULL));
	Base *base;
	int n = rand() % 3 + 1;
	if (n == 1)
		base = new A();
	else if (n == 2)
		base = new B();
	else
		base = new C();
	return base;
}

void identify_from_pointer(Base * p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Conversion is not OK!" << std::endl;
}

void identify_from_reference(Base & p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &e){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &e){}
}

int main()
{
	Base *base;
	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	return (0);
}
