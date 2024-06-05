/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:35:44 by ael-khni          #+#    #+#             */
/*   Updated: 2024/04/23 10:25:38 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "type: " << animal->getType() << std::endl;
	std::cout << "type: " << dog->getType() << std::endl;
	std::cout << "type: " << cat->getType() << std::endl;

	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	delete (animal);
	delete (dog);
	delete (cat);

	std::cout << std::endl<< "WRONG" << std::endl<< std::endl;

	const WrongAnimal * wrongAnimal = new WrongAnimal();
	const WrongAnimal * wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	std::cout << "type: " << wrongAnimal->getType() << std::endl;
	std::cout << "type: " << wrongCat->getType() << std::endl;

	delete (wrongAnimal);
	delete (wrongCat);
	return (0);
}