/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:46:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/06 12:46:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H
# include <iostream>

class Victim
{
protected:
	std::string _name;
public:
	Victim();
	Victim(const std::string &_name);
	Victim(const Victim & obj);
	Victim &operator=(Victim const &obj);
	~Victim();

	const std::string get_name() const;
	void set_name(const std::string &_name);
	virtual void getPolymorphed() const;
};

std::ostream & operator << (std::ostream & o, Victim const & obj);

#endif