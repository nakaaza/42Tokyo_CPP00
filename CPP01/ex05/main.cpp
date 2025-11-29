#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc < 2)
	{
		std::cerr << "Invalid argument: ./ex05 <level> (<level> ...)" << std::endl;
		return (1);
	}
	int i = 0;
	while (++i < argc)
		harl.complain(argv[i]);
	return (0);
}
