/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:32:33 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/13 12:01:51 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_Name = name;
    this->Hit_point = default_hp;
    this->Energy_points = default_ep;
    this->Attack_damage = default_ad;
}

FragTrap    &FragTrap::operator=(FragTrap const &_OpeCopy)
{
    std::cout << "FragTrap operator assignation called" << std::endl;
    this->_Name = _OpeCopy._Name;
    this->Hit_point = _OpeCopy.Hit_point;
    this->Energy_points = _OpeCopy.Energy_points;
    this->Attack_damage = _OpeCopy.Attack_damage;
    return (*this);
}

FragTrap::FragTrap(FragTrap const &_copy) : ClapTrap(_copy)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = _copy;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap : " << getName() << ", guys HIGH FIVES ?" << std::endl;
}

void    FragTrap::attack(const std::string &target)
{
    if (getEP() != 0 && getHP() != 0)
    {
        std::cout << "FragTrap " << _Name << " attacks " << target << ", causing " << Attack_damage << " point of damage!" << std::endl;
        setEP(getEP() - 1);
    }
    else
        std::cout << "Can't attack, no more Hit Points or Energy Point" << std::endl;
    return ;
} 