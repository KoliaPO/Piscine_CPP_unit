/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 13:31:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/11 13:31:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	toChar(std::string av)
{
	try
	{
		int num;
		num = std::stoi(av);
		if (num < -128 || num > 127)
			std::cout << "char: " << "impossible" << std::endl;
		else if (num > 31 && num < 127)
			std::cout << "char: " << static_cast<char>(num) << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "char: " << "impossible" << std::endl;
	}
}

void	toInt(std::string av)
{
	try
	{
		int num;
		num = std::stoi(av);
		std::cout << "int: "  << num << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "int: " << "impossible" << std::endl;
	}
}

void	toFloat(std::string av)
{
	try
	{
		float num;
		num = std::stof(av);
		if (static_cast<float>(static_cast<int>(num)) == num)
		std::cout << "float: " << num << ".0f" << std::endl;
		else
			std::cout << "float: " << num << "f" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "float: " << "impossible" << std::endl;
	}
}

void	toDouble(std::string av)
{
	try
	{
		double num ;
		num = std::stod(av);
		if (static_cast<double>(static_cast<int>(num)) == num)
			std::cout << "double: " << num << ".0" << std::endl;
		else
			std::cout << "double: " <<  num <<std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "double: " << "impossible" << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Enter right argument dude!" << std::endl;
		return (0);
	}
	toInt(argv[1]);
	toChar(argv[1]);
	toFloat(argv[1]);
	toDouble(argv[1]);
	return (0);
}
