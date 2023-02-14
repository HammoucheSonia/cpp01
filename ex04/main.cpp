/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:30:46 by shammouc          #+#    #+#             */
/*   Updated: 2023/01/21 18:30:49 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>


int main(int argc, char **argv)
{
    int i = 0;

    if (argc != 4)
    {
        std :: cout << "ce programme prend trois parametres !" << std :: endl;
        return (0);
    }
    std :: ifstream fichier(argv[1], std :: ios :: in); //on ouvre le fichier en lecture 
    if (fichier)
    {
        std :: string ligne;
        std :: string file_name(argv[1]);
        std :: string text;
        std :: ofstream o(file_name.append(".replace").c_str());
        while(getline(fichier, ligne))
        {
            text.append(ligne);
            text.append("\n");
        }
        fichier.close();
        std :: string new_text;
        while (text[i])
        {
            if (strncmp(&text[i], argv[2], strlen(argv[2])) == 0)
            {
                new_text = new_text + argv[3];
                i = i + strlen(argv[2]);
            }
            else
            {
                new_text = new_text + text[i];
                i++;
            }
        }    
        std :: ofstream fichier(file_name.c_str(), std :: ios::out | std :: ios::trunc);
        if(fichier)
           fichier << new_text;
        fichier.close() ;
    }
    else
        std :: cout << "Impossible d'ouvrir le fichier !" << std :: endl;
    return (0);
}