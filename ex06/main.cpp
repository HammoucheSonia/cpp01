/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:05:37 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/27 16:05:39 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"
void complain(std::string level);

int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    Harl harl;
    harl.complain(argv[1]);
    return (0);
}