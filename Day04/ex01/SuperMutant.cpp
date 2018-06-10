/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:42:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 13:42:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &obj)
{
	*this = obj;
}

SuperMutant& SuperMutant::operator=(SuperMutant const &obj)
{
	this->_hp = obj.getHP();
	this->_type = obj.getType();
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	damage = damage - 3;
	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
	if (_hp == 0)
		SuperMutant::~SuperMutant();
}