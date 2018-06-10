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

FragTrap::FragTrap() :  _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
					   _maxEnergyPoints(100), _level(1), _name("SadGuy"), _meleeAttack(30), _rangeAttack(20),
					   _armorDamageReduction(5)
{
	std::cout << "FR4G-TP constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) :  _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
									   _maxEnergyPoints(100), _level(1), _name(name),
										_meleeAttack(30), _rangeAttack(20),
									   _armorDamageReduction(5)
{
	std::cout << "FR4G-TP created with name " << get_name() << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FR4G-TP copy constructor called" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP destructor called" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at range,";
	std::cout << " causing " << _rangeAttack << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at melee,";
	std::cout << " causing " << _meleeAttack << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " take " << amount << " damage." << std::endl;
	if (_armorDamageReduction > 0)
	{
		_hitPoints -= amount - _armorDamageReduction;
		_armorDamageReduction -= amount;
	}
	else
		_hitPoints -= amount;
	if (_hitPoints <= 0)
		std::cout << "You are dead" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << _name << " be " << amount << " repaired." << std::endl;
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
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

//******************** GETTER AND SETTER ********************************

int FragTrap::get_hitPoints() const
{
	return _hitPoints;
}

void FragTrap::set_hitPoints(int _hitPoints)
{
	FragTrap::_hitPoints = _hitPoints;
}

int FragTrap::get_maxHitPoints() const
{
	return _maxHitPoints;
}

void FragTrap::set_maxHitPoints(int _maxHitPoints)
{
	FragTrap::_maxHitPoints = _maxHitPoints;
}

int FragTrap::get_energyPoints() const
{
	return _energyPoints;
}

void FragTrap::set_energyPoints(int _energyPoints)
{
	FragTrap::_energyPoints = _energyPoints;
}

int FragTrap::get_level() const
{
	return _level;
}

void FragTrap::set_level(int _level)
{
	FragTrap::_level = _level;
}

const std::string &FragTrap::get_name() const
{
	return _name;
}

void FragTrap::set_name(const std::string &_name)
{
	FragTrap::_name = _name;
}

int FragTrap::get_meleeAttack() const
{
	return _meleeAttack;
}

void FragTrap::set_meleeAttack(int _meleeAttack)
{
	FragTrap::_meleeAttack = _meleeAttack;
}

int FragTrap::get_rangeAttack() const
{
	return _rangeAttack;
}

void FragTrap::set_rangeAttack(int _rangeAttack)
{
	FragTrap::_rangeAttack = _rangeAttack;
}

int FragTrap::get_armorDamageReduction() const
{
	return _armorDamageReduction;
}

void FragTrap::set_armorDamageReduction(int _armorDamageReduction)
{
	FragTrap::_armorDamageReduction = _armorDamageReduction;
}

int FragTrap::get_maxEnergyPoints() const {
	return _maxEnergyPoints;
}

void FragTrap::set_maxEnergyPoints(int _maxEnergyPoints) {
	FragTrap::_maxEnergyPoints = _maxEnergyPoints;
}

