/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:35:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/03 20:24:26 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	// std::cout << "Contact: Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void) {
	// std::cout << "Contact: Destructor called" << std::endl;
	return ;
}

std::string Contact::getPhoneNumber(void) {
	std::string phone_number = "";
	bool valid = false;
	
	while (!valid)
	{
		phone_number = getInput("Phone Number: ");
		if (isValidPhoneNumber(phone_number))
			valid = true;
		else
			std::cout << "Invalid phone number, try again." << std::endl;
	}
	return (phone_number);
}

void Contact::createContact(void) {
	std::cin.ignore();
	std::cout << "Creating Contact, please fill in the following fields:" << std::endl;
	this->firstName = getInput("First Name: ");
	this->lastName = getInput("Last Name: ");
	this->nickame = getInput("Nickname: ");
	this->phoneNumber = this->getPhoneNumber();
	this->darkestSecret = getInput("Darkest Secret: ");
}