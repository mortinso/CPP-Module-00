/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:44:34 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/16 14:08:27 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int	main(void)
{
	PhoneBook phoneBook;
	std::string input = "";

	while (true)
	{
		phoneBook.commandList();
		std::cout << "> ";
		getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}

		if (input.compare("ADD") == 0)
			phoneBook.addContact();
		else if (input.compare("SEARCH") == 0)
			phoneBook.searchContact();
		else if (input.compare("EXIT") == 0)
			break;
	}
	return (0);
}