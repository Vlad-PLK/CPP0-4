/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:25:19 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/13 12:25:12 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_Name = name;
    this->Hit_point = default_hp;
    this->Energy_points = default_ep;
    this->Attack_damage = default_ad;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &_OpeCopy)
{
    std::cout << "ScavTrap operator assignation called" << std::endl;
    this->_Name = _OpeCopy._Name;
    this->Hit_point = _OpeCopy.Hit_point;
    this->Energy_points = _OpeCopy.Energy_points;
    this->Attack_damage = _OpeCopy.Attack_damage;
    return (*this);
}

ScavTrap::ScavTrap(ScavTrap const &_copy) : ClapTrap(_copy)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = _copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << getName() << " is on Gate Keeper mode !" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (getEP() != 0 && getHP() != 0)
    {
        std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAD() << " point of damage!" << std::endl;
        setEP(getEP() - 1);
    }
    else
        std::cout << "Can't attack, no more Hit Points or Energy Point" << std::endl;
    return ;
} 