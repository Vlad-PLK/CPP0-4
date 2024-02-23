/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:26:44 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/13 12:03:02 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

class DiamondTrap : public virtual ClapTrap, public FragTrap, public ScavTrap
{
private:
    std::string _Name;
public:
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &copy);
    DiamondTrap &operator=(DiamondTrap const &_OpCopy);
    ~DiamondTrap();
    void    attack(std::string const &target);
    void    whoAmI(void);
};

#endif