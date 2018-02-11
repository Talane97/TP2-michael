/********************************************
* Titre: Travail pratique #2 - Produit.cpp
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothee CHAUVIN
*******************************************/

#include "Produit.h"

Produit::Produit(const string& nom, int reference, double prix) :
	nom_{ nom },
	reference_{ reference },
	prix_{ prix }
{ }

// Methodes d'acces
string Produit::obtenirNom() const
{
	return nom_;
}

int Produit::obtenirReference() const
{
	return reference_;
}

double Produit::obtenirPrix() const
{
	return prix_;
}


// Methodes de modification
void Produit::modifierNom(const string& nom)
{
	nom_ = nom;
}

void Produit::modifierReference(int reference)
{
	reference_ = reference;
}

void Produit::modifierPrix(double prix)
{
	prix_ = prix;
}

// Methode d'affichage
	ostream& operator<< (ostream& o, const Produit& produit)
	{
		o << "---->" << "nom : "
		<< produit.obtenirNom() << std::setw(3) << " ref : " << produit.obtenirReference << setw(8)
		<< "prix : " << produit.obtenirPrix
		<< endl;
	}

// Methode d'entre
	istream& operator>>(istream& i,const Produit& produit)
	{
		cout << "Saisissez les attributs pour un produit : ";
		i << produit.modifierNom << produit.modifierReference << produit.modifierPrix << endl;
	}
// Methode de comparaison
	bool Produit::operator==(const Produit &produit) const
	{
		return(nom_ == produit.obtenirNom() && reference_ == produit.obtenirReference() && prix_ == produit.obtenirPrix());
	}

	bool Produit::operator>(const Produit &produit)const 
	{
		if (prix_ > produit.obtenirPrix())
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}

	bool Produit::operator<(const Produit &produit)const
	{
		if(prix_ < produit.obtenirPrix())
			cout << "true" << endl;
		else
			cout << "false" << endl;;
	}
