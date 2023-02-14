/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:50:38 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 13:50:44 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class  Zombie
{
    private:
        std :: string name;
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void set_name(std :: string name);
        
};

Zombie* zombieHorde( int N, std::string name);