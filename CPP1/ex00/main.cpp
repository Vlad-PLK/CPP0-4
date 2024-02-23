/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:04:05 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/09 14:10:27 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

void    zzzzz(void)
{
    Zombie *z;
    Zombie *z1;
    Zombie *z2;
    Zombie *z3;

    z = newZombie("Claude");
    z->announce();
    randomChump("François");
    z1 = newZombie("Vlad");
    z1->announce();
    randomChump("David");
    z2 = newZombie("Alex");
    z2->announce();
    randomChump("Michel");
    z3 = newZombie("Daryl");
    z3->announce();
    randomChump("Francis");

    std::cout << "\nDestructors of zombies pointers" << std::endl;
    z->~Zombie();
    z1->~Zombie();
    z2->~Zombie();
    z3->~Zombie();
}

int main(void)
{
    zzzzz();
}