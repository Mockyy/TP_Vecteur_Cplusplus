#pragma once
class Vecteur3
{
private:

	//Attributs membres
	float  nX;
	float  nY;
	float  nZ;

	static int nbVecteur;

public:

	static int compte();

	//-----Constructeurs-----//
	//Par défaut
	Vecteur3();

	//3 arguments
	inline Vecteur3(float x, float y, float z)
	{
		this->nX = x;
		this->nY = y;
		this->nZ = z;
		nbVecteur++;
	}

	//-----Destructeur-----//
	~Vecteur3();

	//-----Getters-----//
	float getX() const;
	float getY() const;
	float getZ() const;

	//-----Setters-----//
	void setX(float x);
	void setY(float y);
	void setZ(float z);


	//-----Coincide-----//
	//Par valeur
	bool valCoincide(Vecteur3 vecteur);

	//Par adresse
	bool adCoincide(Vecteur3* vecteur);

	//Par référence
	bool refCoincide(Vecteur3& vecteur);


	//-----Normax-----//
	//Par valeur
	void valNormax(Vecteur3 vecteur);

	void refNormax(Vecteur3 &vecteur);

	void adNormax(Vecteur3* vecteur);

	//-----Affichage-----//
	void affichage() const;

	//-----Somme-----//
	Vecteur3 somme(Vecteur3 &vecteur);

	//-----Produit scalaire-----//
	float prodScal(Vecteur3 &vecteur);
};

