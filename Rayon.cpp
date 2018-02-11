/********************************************
* Titre: Travail pratique #2 - Rayon.cpp
* Date: 25 janvier 2018
* Auteur: Timoth�e CHAUVIN
*******************************************/

#include "Rayon.h"

Rayon::Rayon(const string& cat) :
	categorie_{ cat },
	tousProduits_{ nullptr }
{
}

Rayon::~Rayon()
{

}



string Rayon::obtenirCategorie() const
{
	return categorie_;
}
void Rayon::modifierCategorie(const string& cat)
{
	categorie_ = cat;
}

void Rayon::ajouterProduit(Produit *produit)
{
	tousProduits_.push_back(produit);
}

 ostream& operator<< (ostream& o,const Rayon& rayon)
{
	o << "Le rayon " << rayon.obtenirCategorie() 
		<< " : " 
		<< endl;
	for (int i = 0; i < rayon.tousProduits_.size();i++)
	{
		o << rayon.tousProduits_[i];
		
	}
	return o;
}

 Rayon Rayon::operator+=(Produit &produit)
 {
	 ajouterProduit(&produit);
	 return *this;
 }

 int Rayon::compterDoublons(Produit* produit)
 {	
	 int nombreDoublons = 0;
	 for (int i = 0; i < tousProduits_.size(); i++)
	 {
		 if (produit == tousProduits_[i])
			 nombreDoublons++;
	 }
	 cout << "Nombre de doublons du produit" + produit->obtenirNom + ":" + nombreDoublons;
 }