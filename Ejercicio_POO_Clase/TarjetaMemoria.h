#include<string>
#include"padreCamara.h"
#include"AtributosComunes.h" 

#pragma once 
class TarjetaMemoria : public AtributosComunes, public padreCamara
{
protected: 
	int capacidad;
	
	
public:
	TarjetaMemoria();
	TarjetaMemoria(int capacidad);
	
    void setcapacidad(int lacapacidad);
	int getcapacidad(); 
}