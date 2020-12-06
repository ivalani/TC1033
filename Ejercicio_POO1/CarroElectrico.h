#include"AtributosCarros.h"
#include"MotorElectrico.h"
#include"AtributosMotores.h" 

#pragma once 
class CarroElectrico: public AtributosCarros, public Motorelectrico, public AtributosMotores
{
protected:
    Motorelectrico motorElectrico
	
public:
	CarroElectrico();
	void setMotorElectrico(Motorelectrico elMotorElectrico);
	Motorelectrico getMotorElectrico();	
};