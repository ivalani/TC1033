#include"AtributosCarros.h" 
void AtributosCarros::setVelocidadMax(int laVelocidadMax)
{
	VelocidadMax = laVelocidadMax;
}
void AtributosCarros::setMarca(string laMarca)
{
	Marca = "Nissan";
}
void AtributosCarros::setModelo(int elModelo)
{
	Modelo = 2020;
}
void AtributosCarros::setNombre(string elNombre) 
{
	Nombre = "Carro 201";
}
int AtributosCarros::getVelocidadMax()
{
	return VelocidadMax;
}
string AtributosCarros::getMarca()
{
	return Marca;
}
int AtributosCarros::getModelo()
{
	return Modelo;
}
string AtributosCarros::getNombre()
{
	return Nombre;
}
