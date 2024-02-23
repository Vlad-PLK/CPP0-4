/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:39 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 17:33:22 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    std::cout << "\n";
    const Animal* j = new Dog();
    std::cout << "\n";
    const Animal* i = new Cat();
    std::cout << "\n";
    const WrongAnimal* teta = new WrongAnimal();
    std::cout << "\n";
    const WrongAnimal* wi = new WrongCat();
    std::cout << "\n";

    std::cout << "i is a : " << wi->getType() << " " << std::endl; 
    std::cout << "j is a : " << j->getType() << " " << std::endl; 
    i->makeSound(); //will output the cat sound! 
    j->makeSound(); //will output the dog sound!
    meta->makeSound();
    std::cout << "\n";

    std::cout << "wrong i is a : " << wi->getType() << " " << std::endl;
    wi->makeSound(); //will output the wronganimal sound!
    teta->makeSound();
    std::cout << "\n";

    delete meta;
    delete i;
    delete j;
    delete teta;
    delete wi;
    return (0);
}