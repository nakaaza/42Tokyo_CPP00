#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	int i = 0;
	while (++i < argc)
		harl.complain(argv[i]);
	return (0);
}
