/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:18:54 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/20 21:19:24 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std :: string name);

void randomChump(std :: string name)
{
    std :: cout << "creation dans la stack " << std :: endl;
    Zombie un_zombie = Zombie(name);
    un_zombie.announce();

    std::cout << "creation dans la heap " << std :: endl;
    Zombie *h_zombie = newZombie(name);
    h_zombie->announce();
    delete h_zombie;

}