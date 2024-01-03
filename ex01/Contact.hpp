#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickame;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact(void);
		~Contact(void);
};

#endif