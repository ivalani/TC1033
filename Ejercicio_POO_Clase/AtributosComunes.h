#include<string>
using namespace std;
//aqui se nombran los atributos que comparte tarjetaMemoria y ProcesadorGrafico
#pragma once
class AtributosComunes
{
protected:
	int VelocidadGB;
	string TipoDeTarjeta;
	int FechaCompra

public:
    void setVelocidadGB(int laVelocidadGB);
    void setTipoDeTarjeta(string elTipoDeTarjeta);
	void setFechaCompra(int laFechaCompra);
    int getVelocidadGB();
    string getTipoDeTarjeta();
	int getFechaCompra();
};