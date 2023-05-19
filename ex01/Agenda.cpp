/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agenda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:24:41 by fmanzana          #+#    #+#             */
/*   Updated: 2023/05/04 21:24:41 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string stringToUpper(std::string str)
{
	for(std::size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

Contact getContact()
{
	Contact contact = Contact();
	std::string c_input = "";

	std::cout << "Enter the fisrt name: ";
	std::getline(std::cin, c_input);
	contact.setFirstName(c_input);
	std::cout << "Enter the last name: ";
	std::getline(std::cin, c_input);
	contact.setLastName(c_input);
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, c_input);
	contact.setNickName(c_input);
	std::cout << "Enter the phone: ";
	std::getline(std::cin, c_input);
	contact.setPhone(c_input);
	std::cout << "Enter a secret: ";
	std::getline(std::cin, c_input);
	contact.setSecret(c_input);
	return (contact);
}

bool	is_digits(std::string str)
{
	for (unsigned long int i = 0; i < str.length(); i++)
	{
		if (!(str.at(i) >= '0' && str.at(i) <= '9'))
			return (false);
	}
	return (true);
}

int	main()
{
	PhoneBook pb = PhoneBook();
	std::string input = "";
	std::string s_idx = "";
	int	idx;

	while (input.compare("EXIT"))
	{
		std::cout << "Enter a command please: ";
		std::getline(std::cin, input);
		input = stringToUpper(input);
		if (!input.compare("ADD"))
			pb.addContact(getContact());
		else if (!input.compare("SEARCH"))
		{
			do {
				std::cout << "Enter the agenda position to search: ";
				std::getline(std::cin, s_idx);
				if (!is_digits(s_idx))
					std::cout << "Error - Insert a number\n";
			} while(!is_digits(s_idx));
			idx = std::stoi(s_idx);
			pb.searchContact(idx);
		}
	}
	return (0);
}
