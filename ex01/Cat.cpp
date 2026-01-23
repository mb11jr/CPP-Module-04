#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructed." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destroyed." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->brain = new Brain();
	*this->brain = *other.brain;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain();
		*this->brain = *other.brain;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
