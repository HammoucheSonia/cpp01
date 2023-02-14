/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:51:04 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 13:51:14 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde(int N, std :: string name)
{
    if (N <= 0)
        return NULL;
    Zombie* tab_zombie = new Zombie[N];
    for (int i=0; i<N; i++)
    {
        tab_zombie[i].set_name(name);
        tab_zombie[i].announce();
    }
    return tab_zombie;

}