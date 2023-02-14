/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:55:21 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 16:55:23 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"
using namespace std;

Weapon::Weapon(std::string type)
	: _type(type) {}

Weapon::~Weapon() {}

void Weapon::setType(std::string type) {
	this->_type = type;
}

std::string Weapon::getType() const {
	return this->_type;
}