/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:39:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/06 12:39:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &obj)
{
	*this = obj;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &obj)
{
	_name = obj.get_name();
	_title = obj.get_title();
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

const std::string &Sorcerer::get_name() const {
	return _name;
}

void Sorcerer::set_name(const std::string &_name) {
	Sorcerer::_name = _name;
}

const std::string &Sorcerer::get_title() const {
	return _title;
}

void Sorcerer::set_title(const std::string &_title)
{
	Sorcerer::_title = _title;
}

void  Sorcerer::polymorph(Victim const &obj) const
{
	obj.getPolymorphed();
}

void  Sorcerer::polymorph(Peon const &obj) const
{
	obj.getPolymorphed();
}

std::ostream & operator << (std::ostream & o, Sorcerer const & obj)
{
	o << "I am " << obj.get_name() << ", " << obj.get_title() << ", and I like ponies !" << std::endl;
	return o;
}
