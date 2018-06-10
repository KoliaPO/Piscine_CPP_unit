/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:12:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 14:12:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	_zombieType = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie();

	zombie->setName(name);
	zombie->setType(_zombieType);
	return zombie;
}
