/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:06:18 by vpolojie          #+#    #+#             */
/*   Updated: 2024/09/03 13:30:30 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string nm) : _Name(nm), Hit_point(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &_copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = _copy;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &OpCopy)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->_Name = OpCopy._Name;
    this->Hit_point = OpCopy.Hit_point;
    this->Energy_points = OpCopy.Energy_points;
    this->Attack_damage = OpCopy.Attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default Destructor called" << std::endl;
}

unsigned    int ClapTrap::getHP(void) const
{
    return (Hit_point);
}

unsigned    int ClapTrap::getEP(void) const
{
    return (Energy_points);
}

unsigned    int ClapTrap::getAD(void) const
{
    return (Attack_damage);
}

void    ClapTrap::setHP(unsigned int _HP)
{
    this->Hit_point = _HP;
}

void    ClapTrap::setEP(unsigned int _EP)
{
    this->Energy_points = _EP;
}

void    ClapTrap::setAD(unsigned int _AD)
{
    this->Attack_damage = _AD;
}

void    ClapTrap::attack(const std::string &target)
{
    if (getEP() != 0 && getHP() != 0)
    {
        std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << Attack_damage << " point of damage!" << std::endl;
        setEP(getEP() - 1);
    }
    else
        std::cout << "Can't attack, no more Hit Points or Energy Point" << std::endl;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (getHP() > 0)
    {
        std::cout << "ClapTrap " << _Name << " takes " << amount << " point of damage!" << std::endl;
        setHP(getHP() - amount);
    }
    else
        std::cout << "Can't take damage, he's dead :(" << std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (getEP() > 0)
    {
        std::cout << "ClapTrap " << _Name << " gets " << amount << " hit points back ! " << std::endl;
        setHP(getHP() + amount);
    }
    else
        std::cout << "Can't repair, no more Energy Points" << std::endl;
    return;
}