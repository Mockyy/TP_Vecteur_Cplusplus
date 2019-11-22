#include "Vecteur3.h"


//Constructeur par défaut
Vecteur3::Vecteur3()
{
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
