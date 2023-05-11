/**
* Programme qui affiche le premier nombre premier supérieur ou égal à une valeur entrée. 
* \file exo1.cpp
* \author Emlyn Murphy
* \date 10 mai 2023
* Créé le 10 mai 2023
*/

#include <iostream>
using namespace std;

bool nombrePremier(int n)
{
    double racine = sqrt(n);
    for (int i = 2; i <= racine; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
     }
    return true;
}

int prochainNombrePremier(int n1)
{
    int n2 = n1 + 1;
    while (true)
    {
        if (nombrePremier(n2) == true)
            return n2;
        n2++;
    }

}

int main()
{
    bool fin = false;
    int n1;

    while (!fin)
    {
        cout << "Entrez un nombre entier: ";
        cin >> n1;
        cout << endl;

        if (n1 == -1)
            break;

        int nPremier = prochainNombrePremier(n1);
        cout << "Le prochain nombre premier est: " << nPremier << endl;
    }
    return 0;
}