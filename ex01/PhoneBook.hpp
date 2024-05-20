/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:38:06 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 13:42:11 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"
# include "utils.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int	index;

	public:
		// Constructors
		PhoneBook(void);

		// Destructors
		~PhoneBook(void);

		// methods
		//std::string	getPhoneNumber(void);
		void		addContact(void);
		void		commandList(void);
		void		displayPhoneBook(void);
		void		searchContact(void);
};

#endif