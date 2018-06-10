/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:12:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 14:12:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string	randomChump()
{
	std::string namesZombies[] = {"Bob", "Shon", "Paul", "Sasha", "Igor",
									"Kolia", "Bitch", "Dick", "Duck", "Stack"};
	int			randName = std::rand() % 10;
	return (namesZombies[randName]);
}

int 		main()
{

	ZombieEvent factoryZombie;
	Zombie	stZombie;
	Zombie	*zombies[10];

	stZombie.setType("BALAMYT");
	stZombie.setName("SHIT");
	stZombie.announce();
	factoryZombie.setZombieType("Stupid");
	for (int i = 0; i < 10; i++)
	{
		zombies[i] = factoryZombie.newZombie(randomChump());
		zombies[i]->announce();
	}
	for (int i = 0; i < 10; i++)
		delete zombies[i];
	return (0);
}