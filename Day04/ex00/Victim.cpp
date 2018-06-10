/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:46:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/06 12:46:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	std::cout << "Some random victim called BLABLA" << " just popped !" << std::endl;
}

std::string const Victim::get_name() const
{
	return _name;
}

void Victim::set_name(const std::string &_name)
{
	Victim::_name = _name;
}

Victim::Victim(const std::string &_name) : _name(_name)
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(const Victim &obj)
{
	_name = obj.get_name();
}

Victim &Victim::operator=(Victim const &obj)
{
	_name = obj.get_name();
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" <<std::endl;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << "  has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator << (std::ostream & o, Victim const & obj)
{
	o << "I'm " << obj.get_name() << " and I like otters !" << std::endl;
	return o;
}