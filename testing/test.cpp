#include "sample.class.hpp"

/* using namespace std; */

int	main(int ac, char **av)
{
	Sample daje('c', 42, 3.14f);
	std::cout << daje.getninst() << std::endl;
	Sample loli('s', 21, 4.42f);
	std::cout << daje.getninst() << std::endl;
	std::cout << loli.getninst() << std::endl;
	std::cout << std::endl;


	if (ac != 1)
		for (int i = 0; av[1][i]; i++)
			std::cout << (char)toupper(av[1][i]);
	std::cout << std::endl;
	std::cout << "Z1 is " << daje.getz1() << std::endl;
	daje.setz1(321);
	std::cout << "Z1 is " << daje.getz1() << std::endl;
	daje.setz1(-321);
	std::cout << "Z1 is " << daje.getz1() << std::endl;
	std::cout << std::endl;

	std::cout << "daje.a1: " << daje.a1 << std::endl;
	std::cout << "daje.a2: " << daje.a2 << std::endl;
	std::cout << "daje.a3: " << daje.a3 << std::endl;
	std::cout << "daje.a4: " << daje.a4 << std::endl;
	std::cout << "loli.a1: " << loli.a1 << std::endl;
	std::cout << "loli.a2: " << loli.a2 << std::endl;
	std::cout << "loli.a3: " << loli.a3 << std::endl;
	std::cout << "loli.a4: " << loli.a4 << std::endl;
	std::cout << std::endl;

	std::cout << "daje.foo: " << daje.foo << std::endl;
	loli.foo = 21;
	std::cout << "loli.foo: " << loli.foo << std::endl;
	std::cout << std::endl;

	daje.setz1(10);
	loli.setz1(20);
	std::cout << "diff one   " << daje.compare(&loli) << std::endl;
	std::cout << "diff two   " << loli.compare(&daje) << std::endl;
	daje.setz1(30);
	std::cout << "diff three " << daje.compare(&loli) << std::endl;
	daje.setz1(20);
	std::cout << "diff four  " << daje.compare(&loli) << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	daje.publbar();
	//daje._privbar(); you cant because is private
}
