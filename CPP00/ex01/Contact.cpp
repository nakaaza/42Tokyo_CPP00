#include <iostream>
#include "Contact.hpp"
#include "utils.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructor called." << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called." << std::endl;
	return ;
}

bool	Contact::update(void)
{
	if (this->update_attr("first name", &this->first_name)
		&& this->update_attr("last name", &this->last_name)
		&& this->update_attr("nickname", &this->nickname)
		&& this->update_attr("phone number", &this->phone_number)
		&& this->update_attr("darkest secret", &this->darkest_secret))
		return (true);
	return (false);
}

bool	Contact::update_attr(std::string attr_name, std::string *attr)
{
	std::string	buff;

	std::cout << "Enter " << attr_name << ": ";
	if (!std::getline(std::cin, buff))
		return (false);
	while (buff.length() == 0)
	{
		std::cerr << "Invalid input: " << attr_name << " can't be empty. Try again." << std::endl;
		std::cout << "Enter " << attr_name << ": ";
		if (!std::getline(std::cin, buff))
			return (false);
	}
	*attr = buff;
	return (true);
}

void	Contact::show_summary()
{
	std::cout << "|" << trunc_to_10(this->first_name);
	std::cout << "|" << trunc_to_10(this->last_name);
	std::cout << "|" << trunc_to_10(this->nickname);
	std::cout << "|" << std::endl;
}

void	Contact::show_detail()
{
	std::cout << "| first name: " << this->first_name << std::endl;
	std::cout << "| last name:  " << this->last_name << std::endl;
	std::cout << "| nickname: " << this->nickname << std::endl;
	std::cout << "| phone number: " << this->phone_number << std::endl;
	std::cout << "| darkest secret: " << this->darkest_secret << std::endl;
}
