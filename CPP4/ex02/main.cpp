/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:39 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/23 13:56:39 by vpolojie         ###   ########.fr       */
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
    Animal **tab;
    //Animal  *i;
    tab = new Animal*[4];
    for (int i=0; i != 4; i++)
    {
        if (i < 2)
        {
            std::cout << "new Cat inside tab of Animals, index : " << i << std::endl;
            tab[i] = new Cat;
            tab[i]->makeSound();
        }
        else
        {
            std::cout << "new Dog inside tab of Animals, index : " << i << std::endl;
            tab[i] = new Dog;
            tab[i]->makeSound();
        }
    }
    std::cout << "\n";

    //i = new Animal;

    std::cout << "\n";
    for (int i=0; i != 4; i++)
    {   
        std::cout << "deleting animal number : " << i << std::endl;
        delete tab[i];
    }
    //system("leaks polymorphism");
    return (0);
}