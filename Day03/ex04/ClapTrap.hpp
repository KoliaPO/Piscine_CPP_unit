/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 19:38:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 19:38:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
protected:

	int 		_hitPoints;
	int 		_maxHitPoints;
	int 		_energyPoints;
	int 		_maxEnergyPoints;
	int			_level;
	std::string _name;
	int 		_meleeAttack;
	int 		_rangeAttack;
	int 		_armorDamageReduction;

public:

	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	int get_hitPoints() const;
	void set_hitPoints(int _hitPoints);
	int get_maxHitPoints() const;
	void set_maxHitPoints(int _maxHitPoints);
	int get_energyPoints() const;
	void set_energyPoints(int _energyPoints);
	int get_maxEnergyPoints() const;
	void set_maxEnergyPoints(int _maxEnergyPoints);
	int get_level() const;
	void set_level(int _level);
	std::string get_name() const;
	void set_name(std::string name);
	int get_meleeAttack() const;
	void set_meleeAttack(int _meleeAttack);
	int get_rangeAttack() const;
	void set_rangeAttack(int _rangeAttack);
	int get_armorDamageReduction() const;
	void set_armorDamageReduction(int _armorDamageReduction);

};

#endif