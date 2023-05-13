#include "sample.class.hpp"

/* using namespace std; */

int	main(int ac, char **av)
{
	Sample daje('c', 42, 4.2f);
	Sample loli('s', 21, 3.14f);

	if (ac != 1)
		for (int i = 0; av[1][i]; i++)
			std::cout << (char)toupper(av[1][i]);
	std::cout << std::endl;

	std::cout << "daje.a1: " << daje.a1 << std::endl;
	std::cout << "daje.a2: " << daje.a2 << std::endl;
	std::cout << "daje.a3: " << daje.a3 << std::endl;
	std::cout << "loli.a1: " << loli.a1 << std::endl;
	std::cout << "loli.a2: " << loli.a2 << std::endl;
	std::cout << "loli.a3: " << loli.a3 << std::endl;
	std::cout << std::endl;

	std::cout << "daje.foo: " << daje.foo << std::endl;
	loli.foo = 21;
	std::cout << "loli.foo: " << loli.foo << std::endl;
	daje.bar();
}
