/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 19:07:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/12 19:07:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

class list;

Span::Span() : _count(0)
{
}

Span::Span(Span const &obj)
{
	*this = obj;
}

Span::Span(unsigned int count)
{
	_count = count;
}

Span::~Span()
{
	_arr.clear();
}

Span& Span::operator=(Span const &obj)
{
	_count = obj._count;
	_arr = obj._arr;
	return *this;
}

void Span::addNumber(int number)
{
	static int num = 0;
	try
	{
		if (num == _count)
			throw std::exception();
		_arr.push_back(number);
		num++;
		std::list<int> lst;
	}
	catch (std::exception &e)
	{
		std::cout << "Error add number !" << std::endl;
	}
}

//void Span::dInt()
//{
//	std::list<int>::const_iterator it;
//	std::list<int>::const_iterator ite = _arr.end();
//	for (it = _arr.begin(); it != ite; ++it)
//		std::cout << *it << " ";
//}

int Span::shortestSpan()
{
	_arr.sort();
	if (_arr.size() < 2)
		throw std::exception();
	std::list<int>::const_iterator it = _arr.begin();
	std::list<int>::const_iterator itj = _arr.begin();
	std::list<int>::const_iterator ite = _arr.end();
	int minSum = Span::longestSpan();
	itj++;
	while (itj != ite)
	{
		if (std::max(*it, *itj) - std::min(*it, *itj) < minSum)
			minSum = std::max(*it, *itj) - std::min(*it, *itj);
		it++;
		itj++;
	}
	return minSum;
}

int Span::longestSpan()
{
	if (_arr.size() < 2)
		throw std::exception();
	return (*(std::max_element(_arr.begin(), _arr.end())) -  *(std::min_element(_arr.begin(), _arr.end())));

}
