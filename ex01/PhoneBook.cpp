/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:39:47 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/04 18:53:59 by mortins-         ###   ########.fr       */
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

void	PhoneBook::addContact(void) {
	Contact newContact;
	
	if (this->index == 8)
		this->index = 0;
	
	newContact.createContact();
	
	this->contacts[this->index] = newContact;
	this->index++;
	std::cout << "Contact added!" << std::endl;
}

void	PhoneBook::commandList(void) {
	std::cout << "Available Commands:" << std::endl;
	std::cout << "ADD -  Save a new contact" << std::endl;
	std::cout << "SEARCH -  Display a specific contact" << std::endl;
	std::cout << "EXIT -  Close the phonebook" << std::endl;
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

void	PhoneBook::searchContact(void) {
	int	index = -1;
	this->displayPhoneBook();
	std::cout << "Enter the contact index: ";
	std::cin >> index;
	if (std::cin.good() && index < 8 && index >= 0)
		this->contacts[index].displayContact();
	else
		std::cout << "Invalid contact index." << std::endl << std::flush;
	std::cin.clear();
	std::cin.ignore();
}
