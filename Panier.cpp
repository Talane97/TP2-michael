/********************************************
* Titre: Travail pratique #2 - Panier.cpp
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothée CHAUVIN
*******************************************/

#include "Panier.h"

Panier::Panier()
{
	totalAPayer_ = 0;

}

Panier::~Panier()
{
}

// methodes d'accès
Produit **  Panier::obtenirContenuPanier()const
{
	this->contenuPanier_;
}


double Panier::obtenirTotalApayer() const
{
	this->totalAPayer_;
}

void Panier::modifierTotalAPayer(double totalAPayer)
{
	totalAPayer_ = totalAPayer;
}

// méthodes de modification

// autres méthodes
void Panier::ajouter(Produit * prod)
{
	contenuPanier_.push_back(prod);
	totalAPayer_ += prod->obtenirPrix();

}

void Panier::livrer()
{
	for (int i = 0; i < contenuPanier_.size(); i++)
		contenuPanier_.pop_back();
	totalAPayer_ = 0;
	
}

Produit * Panier::trouverProduitPlusCher()
{
	// TODO: Implementez la methode
	Produit* produitPlusCher = contenuPanier_[1]->obtenirPrix;
	for (int i = 1; i < contenuPanier_.size(); i++)
	{
		if (contenuPanier_[i]->obtenirPrix < produitPlusCher)
			 produitPlusCher = contenuPanier_[i];
		return produitPlusCher;
	}
}

ostream& operator<< (ostream &o, const Produit& prod)
{
	for (int i = 0; i < obtenirContenuPanier().size(); i++)
		obtenirContenuPanier[i]->afficher();
			o << prod;

	o << "----> total a payer : " << obtenirTotalAPayer << endl;
}
