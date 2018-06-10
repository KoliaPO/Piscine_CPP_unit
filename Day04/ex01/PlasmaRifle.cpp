/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:41:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 13:41:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &obj)
{
	*this = obj;
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const &obj)
{
	this->_name = obj.getName();
	this->_apcost = obj.getAPCost();
	this->_damage = obj.getDamage();
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}