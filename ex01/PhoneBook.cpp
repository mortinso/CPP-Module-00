/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:39:47 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 13:42:07 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	// std::cout << "PhoneBook: Constructor called" << std::endl;
	this->index = 0;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "PhoneBook: Destructor called" << std::endl;
}

/* std::string	PhoneBook::getPhoneNumber(void) {
	std::string phoneNumber = "";
	bool valid = false;

	while (!valid)
	{
		phoneNumber = getInput("* Phone Number: ");
		if (isValidPhoneNumber(phoneNumber))
			valid = true;
		else
			std::cout << "\033[91mInvalid phone number, try again.\033[39m" << std::endl;
	}
	return (phoneNumber);
} */

// To remove the strict phone number checker, replace:
// 		this->phoneNumber = this->getPhoneNumber();
// 	With:
// 		this->phoneNumber = getInput("* Phone Number: ");

void	PhoneBook::addContact(void) {
	Contact newContact;

	if (this->index == 8)
	{
		std::cout << "\033[93mMax number of contacts reached. Replacing oldest contact.\033[39m" << std::endl;
		this->index = 0;
	}

	std::cout << ">> Creating Contact, please fill in the following fields:" << std::endl << std::flush;

	newContact.setFirstName(getInput("* First Name: "));
	if (std::cin.eof())
		return ;

	newContact.setLastName(getInput("* Last Name: "));
	if (std::cin.eof())
		return ;

	newContact.setNickname(getInput("* Nickname: "));
	if (std::cin.eof())
		return ;

	newContact.setPhoneNumber(getInput("* Phone Number: "));
	if (std::cin.eof())
		return ;

	newContact.setDarkestSecret(getInput("* Darkest Secret: "));
	if (std::cin.eof())
		return ;

	this->contacts[this->index] = newContact;
	this->index++;
	std::cout << "\033[92mContact added!\033[39m" << std::endl;
}

void	PhoneBook::commandList(void) {
	std::cout << "\033[30m\033[107m" << " Available Commands:                  " << "\033[39m\033[49m" << std::endl;
	std::cout << "\033[30m\033[107m" << " ADD     - Save a new contact         " << "\033[39m\033[49m" << std::endl;
	std::cout << "\033[30m\033[107m" << " SEARCH  - Display a specific contact " << "\033[39m\033[49m" << std::endl;
	std::cout << "\033[30m\033[107m" << " EXIT    - Close the phonebook        " << "\033[39m\033[49m" << std::endl;
}

void	PhoneBook::displayPhoneBook(void) {
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; i++)
		this->contacts[i].bookFormat(i);
	std::cout << "-------------------------------------------" << std::endl;
}

/* int PhoneBook::getIndex( void )
{
	int	index;
	std::string input;

	while (true)
	{
		index = -1;

		input = getInput(">> Enter the contact index: ");

		index = std::atoi(input.c_str()) - 1;

		if (input.length() == 1 && input[0] >= '1' && input[0] <= '8'
			&& this->contacts[index].getFirstName() != "")
			return (index);

		std::cout << "\033[91mInvalid contact index.\033[39m" << std::endl << std::flush;
		input.clear();
	}
}
 */
void	PhoneBook::searchContact(void) {
	int	index = -1;
	this->displayPhoneBook();
	std::cout << ">> Enter the contact index: ";
	std::cin >> index;
	if (std::cin.eof())
	{
		std::cout << std::endl;
		std::exit(0);
	}
	std::cin.clear();
	if (std::cin.peek() != '\n')
	{
		std::string extra = "";
		getline(std::cin, extra);
		std::cout << "\033[91mInvalid contact index.\033[39m" << std::endl << std::flush;
		return ;
	}
	else if (std::cin.good() && index <= 8 && index > 0)
		this->contacts[index - 1].displayContact();
	else
		std::cout << "\033[91mInvalid contact index.\033[39m" << std::endl << std::flush;
	std::cin.clear();
	std::cin.ignore();
}