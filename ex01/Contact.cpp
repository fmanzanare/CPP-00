/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:47:54 by fmanzana          #+#    #+#             */
/*   Updated: 2023/05/04 20:47:54 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Constructor and Destructor:
Contact::Contact() {}

Contact::~Contact() {}

// Getters:
std::string Contact::getFirstName()
{
	return (this->_first_name);
}

std::string Contact::getLastName()
{
	return (this->_last_name);
}

std::string Contact::getNickname()
{
	return (this->_nickname);
}

std::string Contact::getPhone()
{
	return (this->_phone_nbr);
}

std::string Contact::getSecret()
{
	return (this->_darkest_secret);
}

// Setters:
void Contact::setFirstName(std::string first_name)
{
	this->_first_name = first_name;
}

void Contact::setLastName(std::string last_name)
{
	this->_last_name = last_name;
}

void Contact::setNickName(std::string nickname)
{
	this->_nickname = nickname;
}

void Contact::setPhone(std::string phone)
{
	this->_phone_nbr = phone;
}

void Contact::setSecret(std::string secret)
{
	this->_darkest_secret = secret;
}
