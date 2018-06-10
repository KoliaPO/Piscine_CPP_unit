/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 15:09:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/12 15:09:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>

template <typename T>
class Array
{
private:
	T *_arr;
	unsigned int _n;

public:

	Array() : _arr(NULL), _n(0)
	{
	}

	Array(unsigned int n)
	{
		_arr = new T[n];
		_n = n;
	}

	Array(Array const &obj) : _arr(NULL), _n(0)
	{
		*this = obj;
	}

	Array &operator=(Array const &obj)
	{
		Array::~Array();
		_arr = new T[obj._n];
		for (unsigned int i = 0; i < obj._n; i++)
			_arr[i] = obj._arr[i];
		_n = obj._n;
		return *this;
	}

	T &operator[](unsigned int i)
	{
		if (i > _n || _n == 0)
			throw std::exception();
		return _arr[i];
	}

	~Array()
	{
		delete []_arr;
	}

	unsigned int size()
	{
		return _n;
	}
};

#endif