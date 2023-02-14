/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:18:04 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/20 21:18:07 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 
Zombie* newZombie(std :: string name);
void randomChump(std :: string name);

int main()
{
    std :: cout << "Zombie in stack " << std :: endl;
    Zombie le_zombie = Zombie("hello");
    le_zombie.announce();

    std :: cout << "Zombie in heap " << std :: endl;
    Zombie *h_zombie = newZombie("coucou");
    h_zombie->announce();
    delete h_zombie;
    std :: cout << "######################" << std :: endl;
    randomChump("bonjour");
    return (0);
}