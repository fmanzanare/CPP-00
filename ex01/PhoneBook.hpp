/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:45:12 by fmanzana          #+#    #+#             */
/*   Updated: 2023/05/04 20:45:12 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact			_contacts[8];
		int				_idx;

	public:
		PhoneBook();
		~PhoneBook();
		void addContact(Contact contact);
		void searchContact(int idx);
		std::string resizeStr(std::string str);
		void printPhoneBook(); // NOT IMPLEMMENTED!!
};

#endif
