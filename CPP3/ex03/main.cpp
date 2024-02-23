/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:05:36 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/13 12:37:37 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

int main(void)
{
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
    ClapTrap robot("Terminator");
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
    ScavTrap scavrobot("Samus");
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
    FragTrap fragrobot("50Cent");
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
    DiamondTrap diamant("Diamondo");
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
    std::cout << "MY NAME IS : " << robot.getName() << std::endl;
    std::cout << "HP : " << robot.getHP() << std::endl;
    std::cout << "EP : " << robot.getEP() << std::endl;
    std::cout << "AD : " << robot.getAD() << std::endl;
    robot.attack("robots");
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
    std::cout << "MY NAME IS : " << scavrobot.getName() << std::endl;
    std::cout << "HP : " << scavrobot.getHP() << std::endl;
    std::cout << "EP : " << scavrobot.getEP() << std::endl;
    std::cout << "AD : " << scavrobot.getAD() << std::endl;
    scavrobot.attack("robots");
    scavrobot.guardGate();
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
    std::cout << "MY NAME IS : " << fragrobot.getName() << std::endl;
    std::cout << "HP : " << fragrobot.getHP() << std::endl;
    std::cout << "EP : " << fragrobot.getEP() << std::endl;
    std::cout << "AD : " << fragrobot.getAD() << std::endl;
    fragrobot.attack("robots");
    fragrobot.highFivesGuys();
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
    diamant.whoAmI();
    std::cout << "HP : " << diamant.getHP() << std::endl;
    std::cout << "EP : " << diamant.getEP() << std::endl;
    std::cout << "AD : " << diamant.getAD() << std::endl;
    diamant.attack("ruby");
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
    std::cout << "changing AD=1, HP=100000, EP=200" << std::endl;
    diamant.setAD(1);
    diamant.setHP(100000);
    diamant.setEP(200);
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
    diamant.whoAmI();
    std::cout << "HP : " << diamant.getHP() << std::endl;
    std::cout << "EP : " << diamant.getEP() << std::endl;
    std::cout << "AD : " << diamant.getAD() << std::endl;
    diamant.attack("ruby");
    std::cout << "|||||||||||||||||||||||||||||||||||||" << std::endl;
   
    /*std::cout << "\n";
    std::cout << "It's starting to be a little bit boring....." << std::endl;
    std::cout << "Hi, I'm : " << robot.getName() << " and I have HP, EP, AD : " << robot.getHP() << " " << robot.getEP() << " " << robot.getAD() << std::endl;
    std::cout << "Ho, I'm : " << scavrobot.getName() << " and I have HP, EP, AD : " << scavrobot.getHP() << " " << scavrobot.getEP() << " " << scavrobot.getAD() << std::endl;
    std::cout << "He, I'm : " << fragrobot.getName() << " and I have HP, EP, AD : " << fragrobot.getHP() << " " << fragrobot.getEP() << " " << fragrobot.getAD() << std::endl;
    std::cout << "Terminator is a ClapTrap :)" << std::endl;
    std::cout << "Samus is a ScavTrap herited from a ClapTrap :):)" << std::endl;
    std::cout << "50Cent is a FragTrap herited from a ClapTrap :):):)" << std::endl;
    std::cout << "\n";
    
    robot.attack("dummyRobot1");
    scavrobot.attack("dummyRobot2");
    fragrobot.attack("dummyRobot3");
    std::cout << "Terminator has " << robot.getEP() << " energy point left !" << std::endl; 
    std::cout << "Samus has " << scavrobot.getEP() << " energy point left !" << std::endl; 
    std::cout << "50Cent has " << fragrobot.getEP() << " energy point left !" << std::endl; 
    robot.takeDamage(5);
    scavrobot.takeDamage(50);
    fragrobot.takeDamage(90);
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    std::cout << "Samus has " << scavrobot.getHP() << " HP left !" << std::endl;
    std::cout << "50Cent has " << fragrobot.getHP() << " HP left !" << std::endl;
    robot.takeDamage(4);
    scavrobot.takeDamage(50);
    fragrobot.takeDamage(9);
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    std::cout << "Samus has " << scavrobot.getHP() << " HP left !" << std::endl;
    std::cout << "50Cent has " << fragrobot.getHP() << " HP left !" << std::endl;
    robot.beRepaired(9);
    scavrobot.beRepaired(9);
    fragrobot.beRepaired(1);
    std::cout << "\nFINALLY SOMETHING NEW !!!\n" << std::endl;
    std::cout << "ScavRobot can do that !" << std::endl;
    scavrobot.guardGate();
    std::cout << "\n";
    std::cout << "FragRobot can do that !" << std::endl;
    fragrobot.highFivesGuys();
    std::cout << "\n";
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    std::cout << "Samus has " << scavrobot.getHP() << " HP left !" << std::endl;
    std::cout << "50Cent has " << fragrobot.getHP() << " HP left !" << std::endl;
    robot.takeDamage(10);
    scavrobot.takeDamage(10);
    fragrobot.takeDamage(1);
    std::cout << "\n";*/  
    return (0);
}