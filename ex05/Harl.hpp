/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:07:25 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/23 13:07:30 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include <cstring>
class Harl
{
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(std::string level);
};
