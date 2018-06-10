/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:42:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 13:42:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
private:

	std::string _name;
	int 		_numAP;
	AWeapon		*curWeapon;

public:

	Character();
	Character(Character const &obj);
	Character(std::string const & name);
	~Character();
	Character &operator=(Character const &obj);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const &getName() const;
	int getAP() const;
	AWeapon *getCurWeapon() const;
};

std::ostream & operator << (std::ostream &o, const Character & obj);

#endif