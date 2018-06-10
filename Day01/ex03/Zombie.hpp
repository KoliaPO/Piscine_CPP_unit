/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:11:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 14:11:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
private:
	std::string _nameZombie;
	std::string _typeZombie;
public:
	std::string	getName();
	std::string	getType();
	void		setName(std::string name);
	void		setType(std::string name);
	void		announce();
	~Zombie();
};

#endif