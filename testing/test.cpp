#include <iostream>

using namespace std;

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << endl;
	else
		std::cout << av[1] << endl;
}
