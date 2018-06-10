/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 18:31:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/06 18:31:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	set_hitPoints(100);
	set_maxHitPoints(120);
	set_energyPoints(120);
	set_maxEnergyPoints(120);
	set_level(1);
	set_name("UglyGuy");
	set_meleeAttack(60);
	set_rangeAttack(15);
	set_armorDamageReduction(3);
	std::cout << "SuperTraP constructor called" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	set_hitPoints(100);
	set_maxHitPoints(120);
	set_energyPoints(120);
	set_maxEnergyPoints(120);
	set_level(1);
	set_name(name);
	set_meleeAttack(60);
	set_rangeAttack(15);
	set_armorDamageReduction(3);
	std::cout << "SuperTraP has nameeeee  " << _name << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &obj)
{
	std::cout << "SuperTraP copy constructor called" << std::endl;
	*this = obj;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called" << std::endl;
}

SuperTrap& SuperTrap::operator=(SuperTrap const &rhs)
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


void	SuperTrap::rangedAttack(std::string const & target)
{
	//std::cout << "FragTrap with name " << FragTrap::_name << " range attack" << std::endl;
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	//std::cout << "NinjaTrap with name " << NinjaTrap::_name << " melle attack" << std::endl;
	NinjaTrap::meleeAttack(target);
}
