/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:35:15 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 14:10:34 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string getInput(const std::string prompt) {
	std::string input;

	while (true)
	{
		std::cout << prompt;
		std::cin.clear();
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			input.clear();
			std::cout << std::endl;
			return ("");
		}
		if (!input.empty() && !isAllWhitespaces(input))
			return (input);
		std::cout << "\033[91mInvalid input, try again.\033[0m" << std::endl << std::flush;
	}
}

bool	isAllWhitespaces(const std::string str)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!std::isspace(str[i]))
			return (false);
	}
	return (true);
}

bool	isValidPhoneNumber(const std::string &number)
{
	size_t i;

	i = 0;
	if (number[0] == '+')
		i = 1;
	while (number[i] && i < 18)
	{
		if (!std::isdigit(number[i]))
			return (false);
		i++;
	}
	if (i > 15 || i < 8)
		return (false);
	return (true);
}