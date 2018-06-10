/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 17:40:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/12 17:40:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::list<int> lst;
	std::vector<int> v;
	v.push_back(31);
	v.push_back(32);
	v.push_back(33);
	v.push_back(34);
	v.push_back(35);
	v.push_back(36);
	v.push_back(37);

	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(6);
	easyfind(lst, 6);
	easyfind(v, 33);

	return (0);
}
