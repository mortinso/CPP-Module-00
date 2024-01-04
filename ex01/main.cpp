/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:44:34 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/04 18:55:25 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int	main(void)
{
	PhoneBook phoneBook;
	std::string input = "";

	while (input.compare("EXIT") != 0)
	{
		phoneBook.commandList();
		std::cout << "> ";
		std::cin >> input;
		if (std::cin.eof())
		{
            std::cout << std::endl;
            return (1);
        }
		if (input.compare("ADD") == 0)
			phoneBook.addContact();
		else if (input.compare("SEARCH") == 0)
			phoneBook.searchContact();
	}
	return (0);
}

//	To do:
//	- further debugging
//	- putting the commands list inside a table of sorts
//	- error messages in red(?)
//	- better formatting of the phonebook list(?)