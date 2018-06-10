/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:42:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 13:42:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "Some Guy";
	_numAP = 40;
	curWeapon = NULL;
}

AWeapon* Character::getCurWeapon() const
{
	return curWeapon;
}

Character::Character(std::string const &name) : _name(name)
{
	_numAP = 40;
	curWeapon = NULL;
}

Character::Character(Character const &obj)
{
	*this = obj;
}

Character::~Character()
{
}

Character& Character::operator=(Character const &obj)
{
	_name = obj.getName();
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

int Character::getAP() const
{
	return _numAP;
}

void Character::recoverAP()
{
	_numAP += 10;
	if (_numAP > 40)
		_numAP = 40;
}

void Character::attack(Enemy *enemy)
{
	if (!curWeapon || _numAP < curWeapon->getAPCost() || enemy->getHP() == 0)
		return ;
	std::cout << _name << " attacks " << enemy->getType() << " with a " << curWeapon->getName() << std::endl;
	curWeapon->attack();
	enemy->takeDamage(curWeapon->getDamage());
	_numAP -= curWeapon->getAPCost();
}

void Character::equip(AWeapon *weapon)
{
	curWeapon = weapon;
}

std::ostream & operator << (std::ostream &o, const Character & obj)
{

	if (!obj.getCurWeapon())
		o << obj.getName() << " has " <<  obj.getAP() << " and is unarmed" << std::endl;
	else
		o << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getCurWeapon()->getName() << std::endl;
	return o;
}

