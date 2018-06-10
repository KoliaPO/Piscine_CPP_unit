/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:56:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/03 15:46:09 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add()
{
	std::cout << "  ADD NEW CONTACT  " << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, first_name);
	std::cout << "Last name : ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "Login : ";
	std::getline(std::cin, login);
	std::cout << "Postal address : ";
	std::getline(std::cin, postal_address);
	std::cout << "Email address : ";
	std::getline(std::cin, email);
	std::cout << "Phone number : ";
	std::getline(std::cin, phone_number);
	std::cout << "Birthday date : ";
	std::getline(std::cin, birthday_date);
	std::cout << "Favorite meal : ";
	std::getline(std::cin, favorite_meal);
	std::cout << "Underwear color : ";
	std::getline(std::cin, underwear_color);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, darkest_secret);
	std::cout << "Contact has been added." << std::endl;
}

void	PhoneBook::print_contact(PhoneBook contact)
{
	std::cout << "SEARCHED CONTACT" << std::endl;
	std::cout << "First name : " << contact.first_name << std::endl;
	std::cout << "Last name : " << contact.last_name << std::endl;
	std::cout << "Nickname : " << contact.nickname << std::endl;
	std::cout << "Login : " << contact.login << std::endl;
	std::cout << "Postal address : " << contact.postal_address << std::endl;
	std::cout << "Email address : " << contact.email << std::endl;
	std::cout << "Phone number : " << contact.phone_number << std::endl;
	std::cout << "Birthday date : " << contact.birthday_date << std::endl;
	std::cout << "Favorite meal : " << contact.favorite_meal << std::endl;
	std::cout << "Underwear color : " << contact.underwear_color << std::endl;
	std::cout << "Darkest secret : " << contact.darkest_secret << std::endl;
	std::cout << std::endl;
}
