/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:14:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 20:14:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

HumanB::HumanB()
{

}

HumanB::HumanB(std::string name) : _name(name)
{
}

void 	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

