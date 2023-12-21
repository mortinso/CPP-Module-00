#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	public:
		Contact();
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		int PhoneNumber;
		std::string DarkestSecret;
};

#endif