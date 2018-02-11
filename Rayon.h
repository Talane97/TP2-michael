/********************************************
* Titre: Travail pratique #2 -Rayon.h
* Date: 25 janvier 2018
* Auteur: Timothée CHAUVIN
*******************************************/

#pragma once

#include <string>
#include <vector>
#include "Produit.h"

using namespace std;

class Rayon
{

public:
	Rayon(const string& cat = "inconnu");
	~Rayon();

	void ajouterProduit(Produit *produit);
	void modifierCategorie(const string& cat);
	string obtenirCategorie() const;

	// TODO: Cette methode doit etre remplacee par la surchage de l'operateur +=
	Rayon operator+=(Produit &produit);
	// TODO: Implermenter la methode compterDoublons
	int compterDoublons( Produit* produit);

	// TODO: Cette methode doit être remplacee par la surcharge de l'opérateur <<
	friend ostream& operator<<(ostream& os, const Rayon& rayon);

private:
	string categorie_;

	// TODO: Remplacer ces attributs par un vecteur de la STL
	vector<Produit*> tousProduits_;

};
