/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:17:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 14:17:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>

class FragTrap
{
private:
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
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &);
	~FragTrap();
	FragTrap & operator = (FragTrap const & rhs);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);

	int get_maxEnergyPoints() const;
	void set_maxEnergyPoints(int _maxEnergyPoints);
	int get_hitPoints() const;
	void set_hitPoints(int _hitPoints);
	int get_maxHitPoints() const;
	void set_maxHitPoints(int _maxHitPoints);
	int get_energyPoints() const;
	void set_energyPoints(int _energyPoints);
	int get_level() const;
	void set_level(int _level);
	const std::string &get_name() const;
	void set_name(const std::string &_name);
	int get_meleeAttack() const;
	void set_meleeAttack(int _meleeAttack);
	int get_rangeAttack() const;
	void set_rangeAttack(int _rangeAttack);
	int get_armorDamageReduction() const;
	void set_armorDamageReduction(int _armorDamageReduction);
};

#endif