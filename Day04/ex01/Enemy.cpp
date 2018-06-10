/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:41:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 13:41:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) :  _type(type), _hp(hp)
{
}

Enemy::Enemy()
{
}

Enemy::Enemy(Enemy const &obj)
{
	*this = obj;
}

Enemy::~Enemy()
{
}

Enemy& Enemy::operator=(Enemy const &obj)
{
	_type = obj.getType();
	_hp = obj.getHP();
	return *this;
}

int Enemy::getHP() const
{
	return _hp;
}

std::string const & Enemy::getType() const
{
	return _type;
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
		_hp -= damage;
}
