/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:09:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/07 16:09:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), marines(NULL)
{
}

Squad::Squad(Squad const &obj)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = marines;
	tmp2 = obj.marines;
	marines = NULL;
	while (tmp2)
	{
		if (marines == NULL)
		{
			marines = new(t_list);
			marines->_unit = tmp2->_unit;
			marines->next = NULL;
		}
		else
		{
			tmp = marines;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new(t_list);
			tmp->next->_unit = tmp2->_unit;
			tmp->next->next = NULL;
		}
		tmp2 = tmp2->next;
	}
	this->_count = obj._count;
}

Squad::~Squad()
{
	t_list *tmp;
	while (marines)
	{
		tmp = marines->next;
		if (marines->_unit)
			delete marines->_unit;
		delete marines;
		marines = tmp;
	}
}

Squad& Squad::operator=(Squad const &obj)
{
	t_list  *tmp;

	tmp = marines;
	while (tmp)
	{
		delete tmp->_unit;
	}
	if (this != &obj)
		_count = obj._count;

	t_list	*tmp2;

	tmp = marines;
	tmp2 = obj.marines;
	marines = NULL;
	while (tmp2)
	{
		if (marines == NULL)
		{
			marines = new(t_list);
			marines->_unit = tmp2->_unit;
			marines->next = NULL;
		}
		else
		{
			tmp = marines;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new(t_list);
			tmp->next->_unit = tmp2->_unit;
			tmp->next->next = NULL;
		}
		tmp2 = tmp2->next;
	}
	this->_count = obj._count;
	return *this;
}

int Squad::getCount() const
{
	return _count;
}

ISpaceMarine* Squad::getUnit(int n) const
{
	int i = 0;
	t_list *tmp = marines;
	while (tmp)
	{
		if (i == n)
			return tmp->_unit;
		tmp = tmp->next;
		i++;
	}
	return NULL;
}

int Squad::push(ISpaceMarine *m)
{
	t_list **tmp = &marines;

	while (*tmp)
		tmp = &(*tmp)->next;
	*tmp = new t_list;
	(*tmp)->_unit = m;
	(*tmp)->next = NULL;
	_count++;
	return _count;
}