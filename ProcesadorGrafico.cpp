#include"ProcesadorGrafico.h" 

ProcesadorGrafico::ProcesadorGrafico()
{
	TipoTarjeta = "GPU";
}

ProcesadorGrafico::ProcesadorGrafico(string TipoTarjeta)
{
	TipoTarjeta = TipoTarjeta;
}

void ProcesadorGrafico::setTipoTarjeta(string elTipoTarjeta)
{
	TipoTarjeta = elTipoTarjeta;
}

string ProcesadorGrafico::getTipoTarjeta()
{
	return TipoTarjeta;
}