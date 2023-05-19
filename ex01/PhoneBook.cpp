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

PhoneBook::PhoneBook() : _idx(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(Contact contact)
{
	if (this->_idx < 8)
	{
		this->_contacts[this->_idx] = contact;
		this->_idx++;
	}
	else if (this->_idx == 8)
		this->_contacts[(this->_idx - 1)] = contact;
}

std::string PhoneBook::resizeStr(std::string str)
{
	std::string tmp = "";

	if (str.length() > 10)
	{
		tmp = str.substr(0, 10) + ".";
		return (tmp);
	}
	else
		return (str);
}

void PhoneBook::searchContact(int idx)
{
	if (idx >= 0 && idx < this->_idx && this->_idx != 0)
	{
		Contact contact = this->_contacts[idx];

		std::cout << idx << " | ";
		std::cout << resizeStr(contact.getFirstName()) + " | ";
		std::cout << resizeStr(contact.getLastName()) + " | ";
		std::cout << resizeStr(contact.getNickname()) + "\n";
	}
	else
		std::cout << "The index is out of range\n";
}
