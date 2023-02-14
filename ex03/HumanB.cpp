/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:56:22 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 16:56:25 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"
using namespace std;

HumanB::HumanB(std::string name)
	: _name(name)
	, _weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() const {
	if (_weapon != NULL) {
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	} else {
		std::cout << this->_name << " attacks with his bare hands" << std::endl;
	}
}

void HumanB::setWeapon(const Weapon& weapon) {
	this->_weapon = (Weapon*)&weapon;
}