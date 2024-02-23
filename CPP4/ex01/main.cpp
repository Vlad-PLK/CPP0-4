/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:39 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/23 13:43:49 by vpolojie         ###   ########.fr       */
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
    tab = new Animal*[100];
    for (int i=0; i != 100; i++)
    {
        if (i < 50)
        {
            std::cout << "new Cat inside tab of Animals, index : " << i << std::endl;
            tab[i] = new Cat;
        }
        else
        {
            std::cout << "new Dog inside tab of Animals, index : " << i << std::endl;
            tab[i] = new Dog;
        }
    }
    std::cout << "\n";
    for (int i=0; i != 100; i++)
    {   
        std::cout << "deleting animal number : " << i << std::endl;
        delete tab[i];
    }
    system("leaks polymorphism");
    return (0);
}