/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:37:56 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 13:44:28 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		// Constructors
		Contact(void);

		// Destructors
		~Contact(void);

		// setters
		void setFirstName(std::string _firstName);
		void setLastName(std::string _lastName);
		void setNickname(std::string _nickname);
		void setPhoneNumber(std::string _phoneNumber);
		void setDarkestSecret(std::string _darkestSecret);

		//getters
		std::string getFirstName( void );

		// methods
		std::string	formatString(std::string str);
		void	bookFormat(int index);
		void	displayContact(void);
};

#endif