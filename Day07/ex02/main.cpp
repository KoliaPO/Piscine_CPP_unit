/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 15:20:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/12 15:20:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> a;
	Array<int> a1(3);
	Array<std::string> a2(5);
	Array<std::string> a4(5);

	try
	{
		std::cout << a[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " out limits DUDE !!" << std::endl;
	}

	a1[0] = 1;
	a1[1] = 3;
	a1[2] = 4;

	Array<int> a3(a1);


	try
	{
		std::cout << a1[0] << " " << a1[1] << " " << a1[2] << std::endl;
		std::cout << a3[0] << " " << a3[1] << " " << a3[2] << std::endl;
		std::cout << "a1: " << a1.size() << std::endl;
		std::cout << "a3: " << a3.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " out limits DUDE !!" << std::endl;
	}

	a2[0] = "Hello";
	a2[1] = "world";
	a2[2] = "and";
	a2[3] = "Peace";
	a2[4] = "You";
	a4 = a2;
	try
	{
		std::cout << a2[0] << " " << a2[1] << " " << a2[2] <<  " " << a2[3] << " " << a2[4] << std::endl;
		std::cout << a4[0] << " " << a4[1] << " " << a4[2] <<  " " << a4[3] << " " << a4[4] << std::endl;
		std::cout << "a2 = " << a2.size() << std::endl;
		std::cout << "a4 = " << a4.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " out limits DUDE !!" << std::endl;
	}


	return (0);
}