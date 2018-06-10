/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:54:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 12:54:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

std::string	Pony::getName()
{
	return (_name);
}

Pony::Pony(std::string name) :_name(name)
{
	std::cout << name <<" is born" << std::endl;
}

Pony::~Pony()
{
	std::cout << _name <<" died =(" << std::endl;
}