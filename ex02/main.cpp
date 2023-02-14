/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:32:22 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 16:32:32 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std :: string s1 = "HI THIS IS BRAIN";
    std :: string *stringPTR = &s1;
    std :: string &stringREF = s1;

    std :: cout << &s1 << std :: endl;
    std :: cout << stringPTR << std :: endl;
    std :: cout << &stringREF << std :: endl;
    std :: cout << "####################" << std :: endl;
    std :: cout << s1 << std:: endl;
    std :: cout << *stringPTR << std :: endl;
    std :: cout << stringREF << std :: endl;


    return (0);
}