/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:46:57 by fmanzana          #+#    #+#             */
/*   Updated: 2023/05/04 19:46:57 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

std::string stringToUpper(std::string str)
{
	for(std::size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int main(int argc, char **argv)
{
	int	j = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (j < argc)
		{
			std::cout << stringToUpper(argv[j]);
			j++;
		}
	}
	std::cout << '\n';

	return (0);
}
