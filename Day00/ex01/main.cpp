/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:56:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 15:49:03 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string		choose_operation()
{
	std::string otv;
	std::cout << "Enter operation !" << std::endl;
	std::cout << " - ADD" << std::endl;
	std::cout << " - SEARCH" << std::endl;
	std::cout << " - EXIT" << std::endl;
	std::cout << "Input answer : ";
	std::getline(std::cin, otv);
	if (otv != "ADD" && otv != "EXIT" && otv != "SEARCH")
		std::cout << "Bad operation ." << std::endl;
	return (otv);
}

void	format_input(std::string contact)
{
	if (contact.length() > 10)
		std::cout << contact.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << contact << "|";
}

void	print_full_info(PhoneBook contact)
{
	contact.print_contact(contact);
}

void 	search(PhoneBook *contacts, int i)
{
	int			index;
	std::string	otv;

	index = 0;
	if (i == 0)
	{
		std::cout << "Phone book doesn't have contacts." << std::endl;
		return ;
	}
	else
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << std::setw(10) << j + 1 << "|";
			format_input(contacts[j].first_name);
			format_input(contacts[j].last_name);
			format_input(contacts[j].nickname);
			std::cout << std::endl;
		}
	}
	std::cout << "Enter search index : ";
	std::getline(std::cin, otv);
	if (otv.length() > 1 || (otv[0] <= '0' && otv[0] >= '9'))
		return ;
	index = atoi(&otv[0]);
	if (index >= 1 && index <= i)
		print_full_info(contacts[index - 1]);
	else
		std::cout << "Wrong index !" << std::endl;
}

int		main(void)
{
	PhoneBook	book[8];
	std::string ans;
	int			i;

	i = 0;
	while (1)
	{
		ans = choose_operation();
		if (ans == "ADD")
		{
			if (i == 7)
				std::cout << "You can't add more than 8 contacts, chose another operation";
			else
			{
				book[i].add();
				i++;
			}
		}
		if (ans == "SEARCH")
			search(book, i);
		if (ans == "EXIT")
			break ;
	}
	return (0);
}