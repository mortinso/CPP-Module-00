/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:35:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 13:39:59 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	std::cout << "Contact: Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void) {
	std::cout << "Contact: Destructor called" << std::endl;
	return ;
}

void	Contact::setFirstName(std::string _firstName)
{
	this->firstName = _firstName;
}

void	Contact::setLastName(std::string _lastName)
{
	this->lastName = _lastName;
}

void	Contact::setNickname(std::string _nickname)
{
	this->nickname = _nickname;
}

void	Contact::setPhoneNumber(std::string _phoneNumber)
{
	this->phoneNumber = _phoneNumber;
}

void	Contact::setDarkestSecret(std::string _darkestSecret)
{
	this->darkestSecret = _darkestSecret;
}

std::string Contact::getFirstName( void ) {
	return (this->firstName);
}

std::string	Contact::formatString(std::string str) {
	if (str.length() > 10)
		return (str.substr(0,9) + '.');
	return str;
}

void	Contact::bookFormat(int index) {
	if (this->firstName.empty())
		return ;
	std::cout << std::setw(10) << index + 1;
	std::cout << "|" << std::setw(10) << this->formatString(this->firstName);
	std::cout << "|" << std::setw(10) << this->formatString(this->lastName);
	std::cout << "|" << std::setw(10) << this->formatString(this->nickname) << std::endl;
}

void	Contact::displayContact(void) {
	if (!this->firstName[0])
	{
		std::cout << "\033[91mInvalid contact index.\033[39m" << std::endl << std::flush;
		return ;
	}
	std::cout << std::endl;
	std::cout << "| First Name: " << this->firstName << std::endl;
	std::cout << "| Last Name: " << this->lastName << std::endl;
	std::cout << "| Nickname: " << this->nickname << std::endl;
	std::cout << "| Phone Number: " << this->phoneNumber << std::endl;
	std::cout << "| Darkest Secret: " << this->darkestSecret << std::endl;
	std::cout << std::endl;
}