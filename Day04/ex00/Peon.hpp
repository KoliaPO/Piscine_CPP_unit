/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:46:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/06 12:46:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon();
	Peon(std::string name);
	~Peon();
	Peon(Peon const &obj);
	Peon operator=(Peon const &obj);
	virtual void getPolymorphed() const;
};

#endif