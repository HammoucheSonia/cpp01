/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:55:58 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 16:56:02 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H

# define HUMANA_H
# include "Weapon.hpp"
# include <iostream>
using namespace std;

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void attack() const;
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif