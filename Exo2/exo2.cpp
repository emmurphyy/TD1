/**
* Programme qui permet de deviner la valeur d’un nombre entier choisi aléatoirement entre 0 et 1000.
* \file exo2.cpp
* \author Maya Manel Ait Djebara
* \date 12 mai 2023
* Créé le 10 mai 2023
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int lectureEntier(string texte, int min, int max)
{
    int entier;
    do
    {
        cout << texte;
        cin >> entier;

        if (max < entier < min)
        {
            cout << "Erreur : Entrez un nombre entre " << min << " et " << max << endl;
        }
    } 
    while (max < entier < min);
    
    return entier;
}

int main() 
{
    srand(time(NULL));
    int nombre_aleatoire = rand() % 1001;
    int nb_tentatives = 0;
    int essai = -1;

    while (essai != nombre_aleatoire) 
    {
        essai = lectureEntier("Entrez un nombre entier : ", 0, 1000);
        nb_tentatives++;

        if (essai < nombre_aleatoire) 
        {
            cout << "Trop bas." << endl;
        }
        else if (essai > nombre_aleatoire) 
        {
            cout << "Trop haut." << endl;
        }
    }

    cout << "Bravo! Vous avez réussi en " << nb_tentatives << " tentatives!" << endl;

    return 0;
}