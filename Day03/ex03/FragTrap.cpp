/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:17:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 14:17:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	set_hitPoints(100);
	set_maxHitPoints(100);
	set_energyPoints(100);
	set_maxEnergyPoints(100);
	set_level(1);
	set_name("SadGuy");
	set_meleeAttack(30);
	set_rangeAttack(20);
	set_armorDamageReduction(5);
	std::cout << "FR4G-TP constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	set_hitPoints(100);
	set_maxHitPoints(100);
	set_energyPoints(100);
	set_maxEnergyPoints(100);
	set_level(1);
	set_name(name);
	set_meleeAttack(30);
	set_rangeAttack(20);
	set_armorDamageReduction(5);
	std::cout << "FR4G-TP created with name " << get_name() << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FR4G-TP Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP destructor called" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int rand_num = std::rand() % 2;
	if (get_energyPoints() < 25)
		std::cout << "You don't have energy to use this function !!" << std::endl;
	else
	{
		std::string attacks[] = {"Usless attack", "Crit attack", "Bloom attack", "Shit attack", "Boobs attack"};
		std::cout << _name << " has do " << attacks[rand_num] << target <<" to kill you Mother F**er !!" << std::endl;
		set_energyPoints(get_energyPoints() - 25);
	}
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
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

