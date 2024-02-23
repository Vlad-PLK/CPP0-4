/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:04:05 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/30 15:25:15 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <new>


int main(void)
{
    Zombie  *z;

    z = zombieHorde(5, "francis");
    for (int i=0; i != 5; i++)
        z[i].announce();
    delete[] z;
    //system("leaks zombie_horde");
}