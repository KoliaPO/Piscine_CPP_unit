/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:39:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/06 12:39:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
private:
	Sorcerer();
	std::string _name;
	std::string _title;
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & obj);
	~Sorcerer();
	Sorcerer	&operator=(Sorcerer const &obj);

	const std::string &get_name() const;
	void set_name(const std::string &_name);
	const std::string &get_title() const;
	void set_title(const std::string &_title);
	void polymorph(Victim const &) const;
	void polymorph(Peon const &) const;
};

std::ostream & operator << (std::ostream &o, const Sorcerer & obj);

#endif