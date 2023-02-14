/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:55:49 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 16:55:53 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
using namespace std;

HumanA::HumanA(std::string name, Weapon &weapon)
	: _name(name)
	, _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}