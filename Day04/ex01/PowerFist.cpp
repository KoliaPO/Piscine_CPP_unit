/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:41:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 13:41:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &obj)
{
	*this = obj;
}

PowerFist::~PowerFist()
{
}

PowerFist& PowerFist::operator=(PowerFist const &obj)
{
	_name = obj.getName();
	_apcost = obj.getAPCost();
	_damage = obj.getDamage();
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}