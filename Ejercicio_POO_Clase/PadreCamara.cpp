#include"PadreCamara.h" 

void PadreCamara::setMarca(string laMarca)
{
	Marca = laMarca;
}

void PadreCamara::setModelo(string elModelo)
{
	Modelo = elModelo;
}

string PadreCamara::getMarca()
{
	return Marca;
}

string PadreCamara::getModelo()
{
	return Modelo; 
}