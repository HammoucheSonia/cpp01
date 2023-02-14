/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:56:10 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 16:56:16 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H

# define HUMANB_H
#include "Weapon.hpp"
#include <iostream>
using namespace std;

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		void attack() const;
		void setWeapon(const Weapon &weapon);
	private:
		std::string _name;
		Weapon* _weapon;
};

#endif

