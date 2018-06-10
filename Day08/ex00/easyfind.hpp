/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 17:40:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/12 17:40:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
# include <algorithm>
# include <iostream>

template <typename T>
void easyfind(T t, int toFind)
{
	try
	{
		typename T::iterator it;
		it = std::find(std::begin(t), std::end(t), toFind);
		if (it == std::end(t))
			throw std::exception();
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not find! " << std::endl;
	}
}

#endif
