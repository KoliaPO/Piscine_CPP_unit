/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:42:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 13:42:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H
# include <iostream>
class Enemy
{
protected:
	std::string _type;
	int			_hp;
public:
	Enemy();
	Enemy(Enemy const &obj);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy &operator=(Enemy const &obj);
	std::string const &getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif