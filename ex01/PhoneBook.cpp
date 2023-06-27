/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:47:56 by fmanzana          #+#    #+#             */
/*   Updated: 2023/05/04 20:47:56 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	_idx = 0;
	_aux = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(Contact contact)
{
	if (this->_idx < 8)
	{
		this->_contacts[this->_idx] = contact;
		this->_idx++;
	}
	else if (this->_idx == 8 && this->_aux < 8)
	{
		this->_contacts[(this->_aux)] = contact;
		this->_aux++;
	}
	else if (this->_aux == 8)
	{
		this->_aux = 0;
		this->_contacts[(this->_aux)] = contact;
		this->_aux++;
	}
}

std::string PhoneBook::resizeStr(std::string str)
{
	std::string tmp = "";

	if (str.length() > 9)
	{
		tmp = str.substr(0, 9) + ".";
		return (tmp);
	}
	else
		return (str);
}

void PhoneBook::printPhoneBook(void)
{
	for (int i = 0; i < this->_idx; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << resizeStr(this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << resizeStr(this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << resizeStr(this->_contacts[i].getNickname()) << std::endl;
	}
}

void PhoneBook::searchContact(int idx)
{
	if (idx >= 0 && idx < this->_idx && this->_idx != 0)
	{
		Contact contact = this->_contacts[idx];

		std::cout << "First name: " << contact.getFirstName() << std::endl;
		std::cout << "Last name: " << contact.getLastName() << std::endl;
		std::cout << "Nick name: " << contact.getNickname() << std::endl;
		std::cout << "Phone: " << contact.getPhone() << std::endl;
		std::cout << "Secret: " << contact.getSecret() << std::endl;
	}
	else
		std::cout << "The index is out of range\n";
}
