#include"AtributosComunes.h" 

void AtributosComunes::setVelocidadGB(int laVelocidadGB)
{
	VelocidadGB = laVelocidadGB;
}

void AtributosComunes::setTipoDeTarjeta(string elTipoDeTarjeta)
{
	TipoTarjeta = "GPU";
}

void AtributosComunes::setFechaCompra(int laFechaCompra)
{
	FechaCompra = laFechaCompra();
}

int AtributosComunes::getVelocidadGB()
{
	return VelocidadGB;
}

string AtributosComunes::getTipoDeTarjeta()
{
	return TipoTarjeta;
}

int AtributosComunes::getFechaCompra()
{
	return FechaCompra;
}