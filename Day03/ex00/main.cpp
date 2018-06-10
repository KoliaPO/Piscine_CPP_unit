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

int main()
{
	FragTrap f1("Kolia");
	f1.vaulthunter_dot_exe("Prikol");
	std::cout << "Energy = " <<f1.get_energyPoints() << std::endl;
	std::cout << "HP = " << f1.get_hitPoints() << std::endl;

	f1.takeDamage(25);
	std::cout << "HP = " << f1.get_hitPoints() << std::endl;
	f1.takeDamage(1);
	std::cout << "HP = " << f1.get_hitPoints() << std::endl;
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
};