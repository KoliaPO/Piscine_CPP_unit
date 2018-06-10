/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:17:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 14:17:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap f1("Kolia");
	ScavTrap r2("Chell");
	f1.vaulthunter_dot_exe("Prikol");
	std::cout << "Energy = " <<f1.get_energyPoints() << std::endl;
	f1.takeDamage(25);
	f1.takeDamage(1);
	f1.takeDamage(1);
	f1.takeDamage(1);
	f1.vaulthunter_dot_exe("Prikol");
	std::cout << "Energy = " << f1.get_energyPoints() << std::endl;
	f1.vaulthunter_dot_exe("Prikol");
	std::cout << "Energy = " << f1.get_energyPoints() << std::endl;
	f1.vaulthunter_dot_exe("Prikol");
	std::cout << "Energy = " << f1.get_energyPoints() << std::endl;
	f1.vaulthunter_dot_exe("Prikol");
	std::cout << "Energy = " << f1.get_energyPoints() << std::endl;
	f1.vaulthunter_dot_exe("Prikol");
	std::cout << "Energy = " << f1.get_energyPoints() << std::endl;
	std::cout << "HP = " << f1.get_hitPoints() << std::endl;


	r2.challengeNewcomer(f1.get_name());
	r2.challengeNewcomer(f1.get_name());
	r2.challengeNewcomer(f1.get_name());
	r2.challengeNewcomer(f1.get_name());
	r2.challengeNewcomer(f1.get_name());
}
