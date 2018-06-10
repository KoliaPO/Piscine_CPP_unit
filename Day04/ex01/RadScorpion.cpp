/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:42:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 13:42:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &obj)
{
	*this = obj;
}

RadScorpion& RadScorpion::operator=(RadScorpion const &obj)
{
	this->_hp = obj.getHP();
	this->_type = obj.getType();
	return *this;
}

void RadScorpion::takeDamage(int damage)
{
	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
	if (_hp == 0)
		RadScorpion::~RadScorpion();
}