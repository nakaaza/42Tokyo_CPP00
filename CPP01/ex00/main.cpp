#include <iostream>
#include "Zombie.hpp"

int	main()
{
	Zombie	*z = newZombie("HeapZombie");

	randomChump("StackZombie");
	z->announce();
	delete z;
	return (0);
}
