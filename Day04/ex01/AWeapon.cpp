/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:41:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 13:41:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
}

AWeapon::AWeapon(AWeapon const &obj)
{
	*this = obj;
}

AWeapon::~AWeapon()
{
}

AWeapon& AWeapon::operator=(AWeapon const &obj)
{
	_name = obj.getName();
	_apcost = obj.getAPCost();
	_damage = obj.getDamage();
	return *this;
}

std::string const & AWeapon::getName() const
{
	return _name;
}

int AWeapon::getDamage() const
{
	return _damage;
}

int AWeapon::getAPCost() const
{
	return _apcost;
}
