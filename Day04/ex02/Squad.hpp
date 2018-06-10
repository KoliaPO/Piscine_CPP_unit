/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:09:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 16:09:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
private:
	typedef struct	s_list
	{
		ISpaceMarine	*_unit;
		s_list*			next;

	}				t_list;
	int _count;
	t_list *marines;
public:
	Squad();
	Squad(Squad const &obj);
	~Squad();
	Squad &operator=(Squad const &obj);
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const ;
	virtual int push(ISpaceMarine*);
};


#endif