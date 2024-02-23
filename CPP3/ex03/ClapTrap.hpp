/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:04:18 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/13 12:31:56 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
  protected:
    /* keyword defining members that this class and all subclass of this one can use */
    std::string _Name;
    unsigned int Hit_point;
    unsigned int Energy_points;
    unsigned int Attack_damage;

  public:
    ClapTrap(std::string Name);
    ClapTrap(ClapTrap const &_copy);
    ClapTrap &operator=(ClapTrap const &_OpCopy);
    ~ClapTrap();
    
    unsigned int getHP(void);
    unsigned int getEP(void);
    unsigned int getAD(void);
    std::string getName(void);
    void    setHP(unsigned int HP);
    void    setEP(unsigned int EP);
    void    setAD(unsigned int AD);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif