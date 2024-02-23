/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:46:37 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/28 16:46:30 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string human_name, Weapon &w) : name(human_name), weapon(&w)
{
    /*
        weapon is passed to HumanA with a pointer so it doesn't need to be 
        created when HumanA is created, just gives the pointer the right address
    */
    //name = human_name;
}

void    HumanA::setWeapon(Weapon &w)
{
    /*
        To not create multiple instances of weapon, w_type is a reference.
        It makes "weapon" points to w_type location.
    */
    weapon = &w;
}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}