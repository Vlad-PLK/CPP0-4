/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:11:38 by vpolojie          #+#    #+#             */
/*   Updated: 2024/09/03 13:24:34 by vpolojie         ###   ########.fr       */
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
    std::cout << "Zombie : " << get_name() << " destroyed" << std::endl;
}

std::string Zombie::get_name(void) const
{
    return (name);
}

void    Zombie::set_name(std::string nm)
{
    name.assign(nm);
}

void    Zombie::announce(void)
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}