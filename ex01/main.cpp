/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:50:12 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 13:50:15 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name);
int main()
{
    int n = 10;

    std :: cout << "creation de la horde " << std :: endl;
    Zombie *h_zombie = zombieHorde(n, "coucou");
    delete[] h_zombie;
    return (0);
}
