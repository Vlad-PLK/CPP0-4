/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:46:36 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/28 16:45:54 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string human_name) : name(human_name)
{
    //name.assign(human_name);
}

void    HumanB::setWeapon(Weapon &w_type)
{
    /*
        weapon is passed to HumanB with a pointer so it doesn't need to be 
        created when HumanB is created.
        Also to not create multiple instances of weapon, w_type is a reference.
        It makes "weapon" points to w_type location.
    */
    weapon = &w_type;
}

void    HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}