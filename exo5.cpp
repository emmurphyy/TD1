/**
* Programme qui traite les données d'une épicerie et qui affiche l'aliment le plus cher des 10 aliments donnés.
* \file exo5.cpp
* \author Emlyn Murphy
* \date 10 mai 2023
* Créé le 10 mai 2023
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Aliment
{
	string nom;
	string type;
	int quantite;
	double prix;

	const int nAliments = 10;
};

string lireFichier(const string& chemin)
{
	ifstream fichier(chemin);
	if (!fichier.is_open())
	{
		cout << "Le fichier '" << chemin << "' n'as pas pu etre ouvert" << endl;
		exit(EXIT_FAILURE);
	}
	return string((istreambuf_iterator<char>(fichier)), istreambuf_iterator<char>());
}


void alimentLePlusCher(const Aliment aliments[], int taille) 
{
	double prixAlimentPlusCher;

	for (int i = 0; i < taille; i++)
	{
		if (aliments[i].prix > )
		
		
		getline(iss, aliment);

		nElements[i].nom = aliment.substr(0, aliment.find("\t"));
		aliment = aliment.substr(aliment.find("\t") + 1);

		nElements[i].type = aliment.substr(0, aliment.find("\t"));
		aliment = aliment.substr(aliment.find("\t") + 1);

		nElements[i].quantite = aliment.substr(0, aliment.find("\t"));
		aliment = aliment.substr(aliment.find("\t") + 1);



}

int main()
{


	return 0;
}

