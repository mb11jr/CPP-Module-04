#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal unique;
	const int count = 4;
	Animal *animals[count];

	for (int i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n--- Deep Copy Test ---" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}

	std::cout << "\n--- Deleting Array ---" << std::endl;
	for (int i = 0; i < count; i++)
	{
		delete animals[i];
	}

	return 0;
}
