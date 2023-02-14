/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:07:16 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/23 13:07:19 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


void Harl :: complain(std::string level)
{
    void    (Harl::*functions[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    while (i < 4)
    {
        if (complains[i] == level)
            break;
        i++;
    }
    switch(i)
    {
        case 0:
            (this->*functions[0])();
            break;
        case 1:
            (this->*functions[1])();
            break;
        case 2:
            (this->*functions[2])();
            break;
        case 3:
            (this->*functions[3])();
            break;
        default :
            std :: cout << "Pas de level juste " << std :: endl;
    }
}

void Harl :: debug(void)
{
    std :: cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std ::  endl;
}

void Harl :: info(void)
{
    std :: cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std :: endl;
}

void Harl :: warning(void)
{
    std :: cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std :: endl;
}

void Harl :: error(void)
{
    std :: cout << "This is unacceptable ! I want to speak to the manager now." << std :: endl;
}