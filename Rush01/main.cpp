/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:48:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 13:48:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TextMode.hpp"

void usage()
{
	std::cout << "Enter right number module what you want to see:\n";
	std::cout << "1 - Date Module;\n";
	std::cout << "2 - CPU Module;\n";
	std::cout << "3 - OS Module;\n";
	std::cout << "4 - RAM Module;\n";
	std::cout << "5 - Network Module;\n";
	std::cout << "6 - User Module.\n";
}

int main(int ac, char **av)
{
	if (ac < 2 || ac > 7)
	{
		usage();
		return (0);
	}
	int i = 1;
	while (av[i])
	{
		if (av[i][0] < '1' || av[i][0] > '6')
		{
			usage();
			return (0);
		}
		i++;
	}
	TextMode t;
	t.initNcurses();
	t.createModule(av);
	return (0);
}