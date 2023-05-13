/**
* Programme qui détermine si une collision se produit dans les x premières secondes d’un trajet.
* \file exo3.cpp
* \author Maya Manel Ait Djebara
* \date 12 mai 2023
* Créé le 10 mai 2023
*/

#include <cmath>
#include <iostream>
#include <limits>
using namespace std;

int lecture_entier(string texte, int min, int max) 
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
    int temps_total =
        lecture_entier("Entrez le temps total : ", 1, numeric_limits<int>::max());
    int position1 =
        lecture_entier("Entrez la position initiale du premier train : ",
            -numeric_limits<int>::max(), numeric_limits<int>::max());
    int vitesse1 =
        lecture_entier("Entrez la vitesse du premier train : ", -100, 100);
    int position2 =
        lecture_entier("Entrez la position initiale du second train : ",
            -numeric_limits<int>::max(), numeric_limits<int>::max());
    int vitesse2 =
        lecture_entier("Entrez la vitesse du second train : ", -100, 100);

    bool collision = false;

    for (int t = 1; t <= temps_total; t++) 
    {
        int position1_t = position1 + vitesse1 * t;
        int position2_t = position2 + vitesse2 * t;

        cout << "Apres " << t << " seconde(s)" << endl;
        cout << "Train 1 : " << position1_t << endl;
        cout << "Train 2 : " << position2_t << endl;

        if (position1_t == position2_t) 
        {
            cout << "Il y a eu une collision pendant la " << t << "e seconde!" << endl;
            collision = true;
            break;
        }
    }

    if (!collision) 
    {
        cout << "Il n'y a pas eu de collision." << endl;
    }

    return 0;
}