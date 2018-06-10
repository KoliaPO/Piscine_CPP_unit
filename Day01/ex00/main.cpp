/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:55:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 12:55:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony*	hp = new Pony("Heap");
	std::cout << hp->getName() << " say hello !" << std::endl;
	delete hp;
}

void	ponyOnTheStack()
{
	Pony	st = Pony("Stak");
	std::cout << st.getName() << " say hello !" << std::endl;
}

int main ()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}