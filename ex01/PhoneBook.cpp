/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:39:47 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/03 20:42:21 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	// std::cout << "PhoneBook: Constructor called" << std::endl;
	this->index = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "PhoneBook: Destructor called" << std::endl;
	return ;
}

void	PhoneBook::addContact(void) {
	Contact newContact;
	
	if (this->index == 8)
		this->index = 0;
	
	newContact.createContact();
	
	this->contacts[this->index] = newContact;
	this->index = 0;
	std::cout << "Contact added!" << std::endl;
}


/*
Search function{
	Display all contacts in a list with 4 collumns(index, first name, last name, nickname)
	Each collumn must be 10 characters wide, separated by '|'
	
	Ask user for a contact index
	if (index invalid)
		error and ask again
	else
		display full contact information, one field per line
}
*/