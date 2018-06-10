/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:14:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 20:14:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*_weapon;
	std::string _name;
public:
	HumanB(std::string name);
	HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack();
};

#endif