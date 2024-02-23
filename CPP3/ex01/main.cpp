/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:05:36 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/08 14:18:06 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int main(void)
{
    ClapTrap robot("Terminator");
    ScavTrap scavrobot("selena");
    
    std::cout << "\n";
    std::cout << "I am : " << robot.getName() << " and I have HP, EP, AD : " << robot.getHP() << " " << robot.getEP() << " " << robot.getAD() << std::endl;
    std::cout << "I am : " << scavrobot.getName() << " and I have HP, EP, AD : " << scavrobot.getHP() << " " << scavrobot.getEP() << " " << scavrobot.getAD() << std::endl;
    std::cout << "selena is ScavTrap herited from a ClapTrap :)" << std::endl;
    std::cout << "\n";
    
    robot.attack("dummyRobot1");
    scavrobot.attack("dummyRobot2");
    robot.attack("dummyRobot3");
    scavrobot.attack("dummyRobot4");
    std::cout << "Terminator has " << robot.getEP() << " energy point left !" << std::endl; 
    std::cout << "selena has " << scavrobot.getEP() << " energy point left !" << std::endl; 
    scavrobot.attack("dummyRobot6");
    robot.attack("dummyRobot7");
    scavrobot.attack("dummyRobot8");
    robot.attack("dummyRobot9");
    std::cout << "Terminator has " << robot.getEP() << " energy point left !" << std::endl; 
    std::cout << "selena has " << scavrobot.getEP() << " energy point left !" << std::endl; 
    robot.takeDamage(5);
    scavrobot.takeDamage(5);
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    std::cout << "selena has " << scavrobot.getHP() << " HP left !" << std::endl;
    robot.takeDamage(4);
    scavrobot.takeDamage(4);
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    std::cout << "selena has " << scavrobot.getHP() << " HP left !" << std::endl;
    robot.beRepaired(9);
    scavrobot.beRepaired(9);
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    std::cout << "selena has " << scavrobot.getHP() << " HP left !" << std::endl;
    robot.takeDamage(10);
    scavrobot.takeDamage(10);
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    std::cout << "selena has " << scavrobot.getHP() << " HP left !" << std::endl;
    scavrobot.guardGate();
    std::cout << "\n";   
    return (0);
}