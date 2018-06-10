/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 20:07:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 20:07:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	set_hitPoints(60);
	set_maxHitPoints(60);
	set_energyPoints(120);
	set_maxEnergyPoints(120);
	set_level(1);
	set_name("TrueGuy");
	set_meleeAttack(60);
	set_rangeAttack(5);
	set_armorDamageReduction(0);
	std::cout << "Ninja constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	set_hitPoints(60);
	set_maxHitPoints(60);
	set_energyPoints(120);
	set_maxEnergyPoints(120);
	set_level(1);
	set_name(name);
	set_meleeAttack(60);
	set_rangeAttack(5);
	set_armorDamageReduction(0);
	std::cout << "Ninja created with name " << get_name() << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &obj)
{
	std::cout << "Ninja copy constructor called" << std::endl;
	*this = obj;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Ninja destructor called" << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &rhs)
{
	_hitPoints = rhs.get_hitPoints();
	_maxHitPoints = rhs.get_maxHitPoints();
	_energyPoints = rhs.get_energyPoints();
	_maxEnergyPoints = rhs.get_maxEnergyPoints();
	_level = rhs.get_level();
	_name = rhs.get_name();
	_meleeAttack = rhs.get_meleeAttack();
	_rangeAttack = rhs.get_rangeAttack();
	_armorDamageReduction = rhs.get_armorDamageReduction();
	return *this;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap) const
{
	std::cout << _name << "  dance with  >> " << clap.get_name() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja) const
{
	std::cout << _name << " do something with  >> " << ninja.get_name() << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag) const
{
	std::cout << _name << " fight with >> " << frag.get_name() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav) const
{
	std::cout << _name << " sleep with  >> " << scav.get_name() << std::endl;
}
