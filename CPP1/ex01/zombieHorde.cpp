/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:36:44 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/09 15:01:20 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <new>

Zombie* zombieHorde(int N, std::string nm)
{
    Zombie  *horde;
    int     i;

    horde = new Zombie[N];
    i = 0;
    while (i != N)
    {
        horde[i].set_name(nm);
        horde[i].set_index(i);
        i++;
    }
    return (horde);
}