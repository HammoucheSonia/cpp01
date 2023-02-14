/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:18:22 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/20 21:18:26 by shammouc         ###   ########.fr       */
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

Zombie::Zombie(std :: string name)
{
    this->name = name;
}

