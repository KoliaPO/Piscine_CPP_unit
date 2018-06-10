/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 17:54:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/10 17:54:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy()
{
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &obj)
{
	*this = obj;
}

CentralBureaucracy& CentralBureaucracy::operator=(CentralBureaucracy const &obj)
{
	(void)obj;
	return *this;
}

CentralBureaucracy::~CentralBureaucracy()
{

}

void CentralBureaucracy::doBureaucracy()
{
	std::string type[3] = {"shrubberycreation", "robotomyrequest", "presidentialpardon"};
	std::string target[5] = {"Home", "Town", "Boriii,", "Class", "Train"};

	for (int i = 0; i < 20; i++)
	{
		if (!_blocks[i].getSigner() || !_blocks[i].getExec())
		{
			std::cout << "NETY \n";
			return ;
		}
		_blocks[i].doBureaucracy(type[rand() % 3], target[rand() % 5]);
	}
}

void CentralBureaucracy::feedBur(Bureaucrat &obj)
{
	static int i = 0;
	static int j = 0;

	if (i == 20)
	{
		std::cout << "Full offices." << std::endl;
		queueUp(obj.getName());
		return ;
	}
	if (!j)
	{
		Intern intern;
		_blocks[i].setIntern(intern);
		_blocks[i].setSigner(obj);
		j = 1;
	}
	else
	{
		_blocks[i].setExecutor(obj);
		i++;
		j = 0;
	}
}

void CentralBureaucracy::queueUp(std::string const target)
{
	static int i = 0;

	if (i == 20)
	{
		std::cout << "Full queue." << std::endl;
		return ;
	}
	_queue[i] = target;
	i++;
}