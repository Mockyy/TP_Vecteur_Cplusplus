#include <iostream>
#include <cstdlib>
#include "Vecteur3.h"

using namespace std;

int main()
{
	Vecteur3 vect1(4, 5, 6);

	//Vecteur3 vect2 = Vecteur3();

	Vecteur3 vect2(4, 8, 8);

	//----------Exercice 2----------//

	//Test par adresse
	if (vect1.adCoincide(&vect2))
	{
		cout << "Les vecteurs coincident" << endl;
	}
	else
	{
		cout << "Les vecteurs ne coincident pas" << endl;
	}

	//Test par valeur
	//vect1.valCoincide(vect2);

	//Test par référence
	//vect1.refCoincide(vect2);

	//----------Exercice 3----------//
	//Par valeur
	vect1.valNormax(vect2);

	//Par référence
	vect1.refNormax(vect2);

	//----------Exercice 4----------//
	//Constructeur 
	Vecteur3 vectZero;

	//Affichage
	vectZero.affichage();

	//Somme
	Vecteur3 somme = vect1.somme(vect2);

	cout << "Somme de vect1 et vect2 : ";
	somme.affichage();

	//Produit scalaire
	cout << "Produit scalaire de vect1 et vect2 : " << vect1.prodScal(vect2) << endl;

	//----------Exercice 5----------//
	cout << "Il y a : " << Vecteur3::compte() << " vecteurs." << endl;


	system("pause");

	return 0;
}