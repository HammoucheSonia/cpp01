/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:55:31 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 16:55:34 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H

# define WEAPON_H

#include <iostream>
using namespace std;

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();

		void setType(std::string type);
		std::string getType() const;

	private:
		std::string _type;
};

#endif

