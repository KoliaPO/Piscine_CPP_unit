/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:04:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/11 17:04:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize()
{
	std::srand(time(NULL));
	Data *data = new Data;
	char letters[] = "ASDFGHJKLQWERTYUIOPZXCVBNM1234567890";
	for (int i = 0; i < 8; i++)
	{
		data->s1 += letters[rand() % 36];
		data->s2 += letters[rand() % 36];
	}
	data->n = rand();
	return (reinterpret_cast<void *>(data));
}

Data *deserialize(void * raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *data;
	void *tmp;
	tmp = serialize();
	data = deserialize(tmp);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	return (0);
}