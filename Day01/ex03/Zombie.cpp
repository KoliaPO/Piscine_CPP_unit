/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:11:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 14:11:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::getName()
{
	return _nameZombie;
}

std::string	Zombie::getType()
{
	return _typeZombie;
}

void		Zombie::setName(std::string name)
{
	_nameZombie = name;
}
void		Zombie::setType(std::string type)
{
	_typeZombie = type;
}

void		Zombie::announce()
{
	std::cout <<  "<" << getName() << " " << getType() << "> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << getName() << " dieeeedddddd....." << std::endl;
}