#include<string>
using namespace std;
//aqui se nombran los atributos que comparte ambos carros
#pragma once
class AtributosCarros
{
protected:
	int VelocidadMax;
	string Marca;
	int Modelo;
	string Nombre;

public:
	void setVelocidadMax(int laVelocidadMax);
	void setMarca(string laMarca);
	void setModelo(int elModelo);
	void setNombre(string elNombre);
	
	int getVelocidadMax();
	string getMarca();
	int getModelo();
	string getNombre();
};