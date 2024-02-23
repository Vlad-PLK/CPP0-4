/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:27:36 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/13 12:22:35 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;    
    this->_Name = name;
    ClapTrap::_Name = name.append("_clap_name"); 
    this->Hit_point = FragTrap::default_hp;
    this->Energy_points = ScavTrap::default_ep;
    this->Attack_damage = FragTrap::default_ad;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;    
    *this = copy;
}

DiamondTrap    &DiamondTrap::operator=(DiamondTrap const &_OpeCopy)
{
    std::cout << "DiamondTrap operator assignation called" << std::endl;
    this->_Name = _OpeCopy._Name;
    this->Hit_point = _OpeCopy.Hit_point;
    this->Energy_points = _OpeCopy.Energy_points;
    this->Attack_damage = _OpeCopy.Attack_damage;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void    DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondName : " << _Name << ", ClapTrapName : " << ClapTrap::getName() << std::endl;
}