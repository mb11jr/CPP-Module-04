#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructed." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
