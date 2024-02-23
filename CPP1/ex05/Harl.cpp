/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:42:26 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/26 17:09:12 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void    Harl::info(void)
{
    std::cout<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning(void)
{
    std::cout<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout<< "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::setTab(void)
{
    _tab[0].assign("1");
    _tab[1].assign("2");
    _tab[2].assign("3");
    _tab[3].assign("4");
}

void    Harl::complain(std::string level)
{
    void (Harl::*funcPtr[4])(void);
    int i;

    i = 0;
    funcPtr[0] = &Harl::debug;
    funcPtr[1] = &Harl::info;
    funcPtr[2] = &Harl::warning;
    funcPtr[3] = &Harl::error;
    setTab();
    while (level.compare(_tab[i]) != 0)
        i++;
    (this->*funcPtr[i])();
}