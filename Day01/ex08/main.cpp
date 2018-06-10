/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:08:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/04 16:08:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main()
{
	Human human;

	human.action("meleeAttack","VASYA");
	human.action("rangedAttack","DICK");
	human.action("intimidatingShout","SICK");
	return (0);
}