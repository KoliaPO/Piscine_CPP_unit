/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 19:38:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 19:38:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at range,";
	std::cout << " causing " << _rangeAttack << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at melee,";
	std::cout << " causing " << _meleeAttack << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout <<  _name << " take " << amount << " damage." << std::endl;
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

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout <<  _name << " be " << amount << " repaired." << std::endl;
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
}

//**************** GETER AND SETTER *************************

int ClapTrap::get_hitPoints() const {
	return _hitPoints;
}

void ClapTrap::set_hitPoints(int _hitPoints) {
	ClapTrap::_hitPoints = _hitPoints;
}

int ClapTrap::get_maxHitPoints() const {
	return _maxHitPoints;
}

void ClapTrap::set_maxHitPoints(int _maxHitPoints) {
	ClapTrap::_maxHitPoints = _maxHitPoints;
}

int ClapTrap::get_energyPoints() const {
	return _energyPoints;
}

void ClapTrap::set_energyPoints(int _energyPoints) {
	ClapTrap::_energyPoints = _energyPoints;
}

int ClapTrap::get_maxEnergyPoints() const {
	return _maxEnergyPoints;
}

void ClapTrap::set_maxEnergyPoints(int _maxEnergyPoints) {
	ClapTrap::_maxEnergyPoints = _maxEnergyPoints;
}

int ClapTrap::get_level() const {
	return _level;
}

void ClapTrap::set_level(int _level) {
	ClapTrap::_level = _level;
}

void ClapTrap::set_name(std::string name)
{
	_name = name;
}

std::string ClapTrap::get_name() const
{
	return _name;
}

int ClapTrap::get_meleeAttack() const {
	return _meleeAttack;
}

void ClapTrap::set_meleeAttack(int _meleeAttack) {
	ClapTrap::_meleeAttack = _meleeAttack;
}

int ClapTrap::get_rangeAttack() const {
	return _rangeAttack;
}

void ClapTrap::set_rangeAttack(int _rangeAttack) {
	ClapTrap::_rangeAttack = _rangeAttack;
}

int ClapTrap::get_armorDamageReduction() const {
	return _armorDamageReduction;
}

void ClapTrap::set_armorDamageReduction(int _armorDamageReduction) {
	ClapTrap::_armorDamageReduction = _armorDamageReduction;
}
