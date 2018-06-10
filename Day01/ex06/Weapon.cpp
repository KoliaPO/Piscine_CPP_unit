/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:13:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 20:13:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	const	&Weapon::getType()
{
	return (_type);
}

void			Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string type) : _type(type)
{

}
Weapon::Weapon()
{

}