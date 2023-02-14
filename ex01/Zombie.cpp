/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:50:28 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 13:50:31 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie() 
{
}

Zombie::~Zombie() 
{ 
    std::cout << this->name << " died." << std::endl;
}

void Zombie::announce()
{
    std :: cout << name << " : BraiiiiiiinnnzzzZ..." << std :: endl;
}

void Zombie::set_name(std :: string name)
{
    this->name = name;
}
