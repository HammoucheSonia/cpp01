/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:18:34 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/20 21:18:37 by shammouc         ###   ########.fr       */
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
        Zombie(std :: string);
        Zombie* newZombie(std :: string name );
        void randomChump(std :: string name );
        
};
