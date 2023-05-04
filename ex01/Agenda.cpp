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

int	main()
{
	PhoneBook pb = PhoneBook();
	std::string input = "";

	while (input.compare("EXIT"))
	{
		std::cout << "Enter a command please:\n";
		std::getline(std::cin, input);
		input = stringToUpper(input);
	}

	return (0);
}
