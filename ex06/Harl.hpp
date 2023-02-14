/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:06:08 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/27 16:06:10 by shammouc         ###   ########.fr       */
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