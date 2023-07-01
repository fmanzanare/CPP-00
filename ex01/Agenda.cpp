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

#include <stdlib.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string stringToUpper(std::string str)
{
	for(std::size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

std::string getInput(void)
{
	std::string c_input = "";

	do {
		if (!std::getline(std::cin, c_input))
		{
			std::cout << "\n";
			exit(0);
		}
		if (c_input.length() == 0)
			std::cout << "Error: You must enter a value: ";
	} while (c_input.length() == 0);
	return (c_input);
}

Contact getContact()
{
	Contact contact = Contact();

	std::cout << "Enter the fisrt name: ";
	contact.setFirstName(getInput());
	std::cout << "Enter the last name: ";
	contact.setLastName(getInput());
	std::cout << "Enter the nickname: ";
	contact.setNickName(getInput());
	std::cout << "Enter the phone: ";
	contact.setPhone(getInput());
	std::cout << "Enter a secret: ";
	contact.setSecret(getInput());
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
		input = stringToUpper(getInput());
		if (!input.compare("ADD"))
			pb.addContact(getContact());
		else if (!input.compare("SEARCH"))
		{
			pb.printPhoneBook();
			do {
				std::cout << "Enter the agenda position to search: ";
				s_idx = getInput();
				if (!is_digits(s_idx))
					std::cout << "Error - Insert a number\n";
			} while(!is_digits(s_idx));
			idx = std::atoi(s_idx.c_str());
			pb.searchContact(idx);
		}
	}
	return (0);
}
