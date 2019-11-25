#include <math.h>
#include <iostream>
#include "Vecteur3.h"

using namespace std;

int Vecteur3::nbVecteur = 0;

int Vecteur3::compte()
{
	return nbVecteur;
}

Vecteur3::Vecteur3()
{
	this->nX = 0;
	this->nY = 0;
	this->nZ = 0;
	nbVecteur++;
}

//Destructeur
Vecteur3::~Vecteur3()
{
	nbVecteur--;
}

//-----Getters-----//
float Vecteur3::getX() const
{
	return nX;
}

float Vecteur3::getY() const
{
	return nY;
}

float Vecteur3::getZ() const
{
	return nZ;
}

//-----Setters-----//
void Vecteur3::setX(float x)
{
	this->nX = x;
}

void Vecteur3::setY(float y)
{
	this->nY = y;
}

void Vecteur3::setZ(float z)
{
	this->nZ = z;
}

//-----Coincide-----//

//Par valeur
bool Vecteur3::valCoincide(Vecteur3 vecteur)
{
	if ((vecteur.nX == nX) && (vecteur.nY == nY) && (vecteur.nZ == nZ))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Par adresse
bool Vecteur3::adCoincide(Vecteur3* vecteur)
{
	if ((vecteur->nX == nX) && (vecteur->nY == nY) && (vecteur->nZ == nZ))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Par référence
bool Vecteur3::refCoincide(Vecteur3 & vecteur)
{
	if ((vecteur.nX == nX) && (vecteur.nY == nY) && (vecteur.nZ == nZ))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//-----Normax-----//

//Par valeur
void Vecteur3::valNormax(Vecteur3 vecteur)
{
	float norme1 = sqrt(nX * nX + nY * nY + nZ * nZ);
	float norme2 = sqrt(vecteur.nX * vecteur.nX + vecteur.nY * vecteur.nY + vecteur.nZ * vecteur.nZ);

	if (norme1 > norme2)
	{
		cout << "Le vecteur 1 est plus grand : " << norme1 << endl;
	}
	else
	{
		cout << "Le vecteur 2 est plus grand : " << norme2 << endl;
	}
}

//Par référence
void Vecteur3::refNormax(Vecteur3 &vecteur)
{
	float norme1 = sqrt(nX * nX + nY * nY + nZ * nZ);
	float norme2 = sqrt(vecteur.nX * vecteur.nX + vecteur.nY * vecteur.nY + vecteur.nZ * vecteur.nZ);

	if (norme1 > norme2)
	{
		cout << "Le vecteur 1 est plus grand : " << norme1 << endl;
	}
	else
	{
		cout << "Le vecteur 2 est plus grand : " << norme2 << endl;
	}
}

//Par adresse 
void Vecteur3::adNormax(Vecteur3* vecteur)
{
	float norme1 = sqrt(nX * nX + nY * nY + nZ * nZ);
	float norme2 = sqrt(vecteur->nX * vecteur->nX + vecteur->nY * vecteur->nY + vecteur->nZ * vecteur->nZ);

	if (norme1 > norme2)
	{
		cout << "Le vecteur 1 est plus grand : " << norme1 << endl;
	}
	else
	{
		cout << "Le vecteur 2 est plus grand : " << norme2 << endl;
	}
}

//-----Afffichage------//

void Vecteur3::affichage() const
{
	cout << "< X = " << nX << ", Y = " << nY << ", Z = " << nZ << '>' << endl;
}

//-----Somme de deux vecteurs-----//

Vecteur3 Vecteur3::somme(Vecteur3 &vecteur)
{
	Vecteur3 somme(nX + vecteur.nX, nY + vecteur.nY, nZ + vecteur.nZ);

	return somme;
}

//-----Produit scalaire de deux vecteurs-----//

float Vecteur3::prodScal(Vecteur3 &vecteur)
{
	float scal = (nX * vecteur.nX) + (nY * vecteur.nY) + (nZ * vecteur.nZ);

	return scal;
}
