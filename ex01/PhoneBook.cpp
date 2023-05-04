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
}

void PhoneBook::searchContact(int idx)
{
	if (idx > 0 && idx < 8 )
	{
		Contact contact = this->_contacts[idx];

		// OJO! Esto esta mal!!! Revisar subject!!!
		std::cout << contact.getFirstName() + "|";
		std::cout << contact.getLastName() + "|";
		std::cout << contact.getNickname() + "|";
		std::cout << contact.getPhone() + "|";
		std::cout << contact.getSecret() + "|";
	}
	else
		std::cout << "The index is out of range\n";
}
