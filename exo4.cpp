/**
* Programme qui saisit un tableau d’entiers de taille 10 et le trie pour le placer en ordre croissant.
* \file exo4.cpp
* \author Emlyn Murphy
* \date 10 mai 2023
* Créé le 10 mai 2023
*/

#include <iostream>
using namespace std;

void trie(int tableau[], int taille)
{
    for (int i = 0; i < taille - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < taille; j++)
        {
            if (tableau[min] > tableau[j])
            {
                min = j;
            }
        }
        int tableauTampon = tableau[i];
        tableau[i] = tableau[min];
        tableau[min] = tableauTampon;
    }
}

int main()
{
    const int taille = 10;
    int tableau[taille];

    cout << "Entrez 10 nombres entiers: ";
    for (int i = 0; i < taille; i++)
    {
        cin >> tableau[i];
        cout << endl;
    }

    trie(tableau, taille);

    cout << "Voici le tableau trie: ";
    for (int i = 0; i < taille; i++)
    {
        cout << tableau[i] << " ";
    }
    cout << endl;
    
    return 0;
}