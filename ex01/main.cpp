/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:44:34 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/03 17:25:33 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phone;
	std::string input = "";

	std::cout << "> ";
	std::cin >> input;
	while (input.compare("EXIT") != 0) {
		if (input.compare("ADD") == 0)
			;	// ADD function
		else if (input.compare("SEARCH") == 0)
			;	// SEARCH function
		else if (input.compare("EXIT") != 0)
			std::cout << "ERROR: Unrecognized command: " << input << std::endl;
		std::cout << "> ";
		std::cin >> input;
	}
	return (0);
}