#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) {}

HumanB::~HumanB(void) {}

void	HumanB::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with their ";
	std::cout << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
