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

ScavTrap::ScavTrap() :  _hitPoints(100),  _maxHitPoints(100), _energyPoints(50),
					   _maxEnergyPoints(50), _level(1), _name("HappyGuy"),
						_meleeAttack(20), _rangeAttack(15),
					   _armorDamageReduction(3)
{
	std::cout << "RD2-D2 constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :  _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
									   _maxEnergyPoints(50), _level(1), _name(name),
										_meleeAttack(20), _rangeAttack(15),
									   _armorDamageReduction(3)
{
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

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at range,";
	std::cout << " causing " << _rangeAttack << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at melee,";
	std::cout << " causing " << _meleeAttack << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << _name << " be " << amount << " repaired." << std::endl;
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string names[] = {"Naked fight", "Fight in clothes", "Fight without pants", "Ping-Pong", "In Samurai"};
	std::cout << "RD2-D2  " << _name << " go to fight " << target << " " << names[std::rand() % 5] << std::endl;
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

//**************** GETER AND SETTER *************************

int ScavTrap::get_hitPoints() const {
	return _hitPoints;
}

void ScavTrap::set_hitPoints(int _hitPoints) {
	ScavTrap::_hitPoints = _hitPoints;
}

int ScavTrap::get_maxHitPoints() const {
	return _maxHitPoints;
}

void ScavTrap::set_maxHitPoints(int _maxHitPoints) {
	ScavTrap::_maxHitPoints = _maxHitPoints;
}

int ScavTrap::get_energyPoints() const {
	return _energyPoints;
}

void ScavTrap::set_energyPoints(int _energyPoints) {
	ScavTrap::_energyPoints = _energyPoints;
}

int ScavTrap::get_maxEnergyPoints() const {
	return _maxEnergyPoints;
}

void ScavTrap::set_maxEnergyPoints(int _maxEnergyPoints) {
	ScavTrap::_maxEnergyPoints = _maxEnergyPoints;
}

int ScavTrap::get_level() const {
	return _level;
}

void ScavTrap::set_level(int _level) {
	ScavTrap::_level = _level;
}

void ScavTrap::set_name(std::string name)
{
	_name = name;
}

std::string ScavTrap::get_name() const
{
	return _name;
}

int ScavTrap::get_meleeAttack() const {
	return _meleeAttack;
}

void ScavTrap::set_meleeAttack(int _meleeAttack) {
	ScavTrap::_meleeAttack = _meleeAttack;
}

int ScavTrap::get_rangeAttack() const {
	return _rangeAttack;
}

void ScavTrap::set_rangeAttack(int _rangeAttack) {
	ScavTrap::_rangeAttack = _rangeAttack;
}

int ScavTrap::get_armorDamageReduction() const {
	return _armorDamageReduction;
}

void ScavTrap::set_armorDamageReduction(int _armorDamageReduction) {
	ScavTrap::_armorDamageReduction = _armorDamageReduction;
}
