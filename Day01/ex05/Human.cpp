/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 18:05:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 18:05:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain*	Human::identify()
{
	return brain.identify();
}

Brain		&Human::getBrain()
{
	return brain;
}
