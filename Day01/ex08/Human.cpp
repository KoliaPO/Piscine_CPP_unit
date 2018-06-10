/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:08:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 17:00:01 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const &target)
{
	std::cout << target << " has melee attacked !!" << std::endl;
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << target << " has range attacked !!" << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << target << " has intimidatingShout attacked !!" << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target)
{
	std::string actions[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	void	(Human::*fnPtr[3])(std::string const &target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	for(int i = 0; i < 3; i++)
	{
		if (actions[i] == action_name)
		{
			(this->*(fnPtr[i]))(target);
		}
	}
}