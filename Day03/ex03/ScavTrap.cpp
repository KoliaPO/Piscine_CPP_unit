/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:22:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 17:22:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	set_hitPoints(100);
	set_maxHitPoints(100);
	set_energyPoints(50);
	set_maxEnergyPoints(50);
	set_level(1);
	set_name("HappyGuy");
	set_meleeAttack(20);
	set_rangeAttack(15);
	set_armorDamageReduction(3);
	std::cout << "RD2-D2 constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	set_hitPoints(100);
	set_maxHitPoints(100);
	set_energyPoints(50);
	set_maxEnergyPoints(50);
	set_level(1);
	set_name(name);
	set_meleeAttack(20);
	set_rangeAttack(15);
	set_armorDamageReduction(3);
	std::cout << "RD2-D2 robot  created with name " << _name << " to kill someone !!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "RD2-D2 copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "RD2-D2 destructor called" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string names[] = {"Naked fight", "Fight in clothes", "Fight without pants", "Ping-Pong", "In Samurai"};
	std::cout << _name << " go to fight " << target << " " << names[std::rand() % 5] << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
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
