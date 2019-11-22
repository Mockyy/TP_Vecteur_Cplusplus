#include <iostream>
#include <cstdlib>
#include "Vecteur3.h"

using namespace std;

int main()
{
	Vecteur3 vect1(4, 5, 6);

	Vecteur3 vect2 = Vecteur3();

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

	system("pause");

	return 0;
}