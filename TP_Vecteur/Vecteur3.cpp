#include "Vecteur3.h"


//Constructeur par défaut
Vecteur3::Vecteur3()
{
	nX = 0;
	nY = 0;
	nZ = 0;
}

//Destructeur
Vecteur3::~Vecteur3()
{
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