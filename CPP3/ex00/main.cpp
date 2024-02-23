/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:05:36 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/08 14:09:17 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int main(void)
{
    ClapTrap robot("Terminator");

    std::cout << "HELLO, I AM TERMINATOR : HP = " << robot.getHP() << " ATTACK DAMAGE = " << robot.getAD() << " ENERGY POINT = " << robot.getEP() << "\n" << std::endl;
    robot.attack("dummyRobot1");
    robot.attack("dummyRobot2");
    robot.attack("dummyRobot3");
    robot.attack("dummyRobot4");
    robot.attack("dummyRobot5");
    std::cout << "Terminator has " << robot.getEP() << " energy point left !" << std::endl; 
    robot.attack("dummyRobot6");
    robot.attack("dummyRobot7");
    robot.attack("dummyRobot8");
    robot.attack("dummyRobot9");
    std::cout << "Terminator has " << robot.getEP() << " energy point left !" << std::endl; 
    robot.takeDamage(5);
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    robot.takeDamage(4);
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    robot.beRepaired(9);
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    robot.takeDamage(10);
    std::cout << "Terminator has " << robot.getHP() << " HP left !" << std::endl;
    robot.takeDamage(10);
    return (0);
}