#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "--- RIGHT WAY (Virtual) ---" << std::endl;
	const Animal *meta = new Animal();
	const Animal *i = new Cat();
	const Animal *j = new Dog();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	i->makeSound();	   // Meow!
	j->makeSound();	   // Woof! Woof!
	meta->makeSound(); // Generic msg

	delete meta;
	delete j;
	delete i;

	std::cout << "\n--- WRONG WAY (No Virtual) ---" << std::endl;
	const WrongAnimal *wrong = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();

	delete wrong;
	return 0;
}
