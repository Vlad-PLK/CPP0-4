/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:04:18 by vpolojie          #+#    #+#             */
/*   Updated: 2024/09/03 13:29:30 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
  private:
    std::string _Name;
    unsigned int Hit_point;
    unsigned int Energy_points;
    unsigned int Attack_damage;

  public:
    ClapTrap(std::string Name);
    ClapTrap(ClapTrap const &_copy);
    ClapTrap &operator=(ClapTrap const &_OpCopy);
    ~ClapTrap();
    
    unsigned int getHP(void) const;
    unsigned int getEP(void) const;
    unsigned int getAD(void) const;
    void    setHP(unsigned int HP);
    void    setEP(unsigned int EP);
    void    setAD(unsigned int AD);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif