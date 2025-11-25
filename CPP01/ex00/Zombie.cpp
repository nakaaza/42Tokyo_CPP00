#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie constructor for " << this->name << " called." << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie destructor for " << this->name << " called." << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
