/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 13:17:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/12 13:17:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void func(T *arr, unsigned int len, void pr(T))
{
	for (unsigned int i = 0; i < len; i++)
		(pr)(arr[i]);
	std::cout << std::endl;
}

template <typename T>
void printArr(T a)
{
	std::cout << a << " ";
}

int main()
{
	int arr[4] = {1, 2, 3, 4};
	float arrF[4] = {20.2, 20.3, 20.4, 20.5};
	char arrCh[4] = {'a', 'b', 'c', 'f'};
	std::string aS[] = {"asd", "bla", "bla"};
	func(arr, 4, printArr);
	func(arrF, 4, printArr);
	func(arrCh, 4, printArr);
	func(aS, aS->length(), printArr);
	return (0);
}
