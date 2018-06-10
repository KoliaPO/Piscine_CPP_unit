/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:09:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 17:09:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N)
{
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(randomChump());
		horde[i].setType("little brainfuck");
	}
}

std::string	ZombieHorde::randomChump()
{
	std::string namesZombies[] = {"Bob", "Shon", "Paul", "Sasha", "Igor",
								  "Kolia", "Bitch", "Dick", "Duck", "Stack"};
	int			randName = std::rand() % 10;
	return (namesZombies[randName]);
}

void		ZombieHorde::announce()
{
		for (int i = 0; i < _N; i++)
			horde[i].announce();
}

ZombieHorde::ZombieHorde()
{
}

ZombieHorde::~ZombieHorde()
{
	delete []horde;
	std::cout << "Our hord die" << std::endl;
}
