/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:11:38 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/09 15:03:34 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    std::cout << "Zombie : " << get_name() << " n°" << get_index() << " destroyed" << std::endl;
}

std::string Zombie::get_name(void)
{
    return (_name);
}

int Zombie::get_index(void)
{
    return (_index);
}

void    Zombie::set_name(std::string nm)
{
    _name.assign(nm);
}

void    Zombie::set_index(int index)
{
    _index = index;
}

void    Zombie::announce(void)
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ... | zombie n°" << get_index() << std::endl;
}