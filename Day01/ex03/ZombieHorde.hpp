/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:09:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 17:09:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include "Zombie.hpp"

class ZombieHorde
{
public:
	int 	_N;
	Zombie *horde;
	ZombieHorde(int N);
	~ZombieHorde();
	ZombieHorde();
	std::string	randomChump();
	void		announce();
};

#endif