#include"MotorNormal.h"
#include"AtributosCarros.h" 
#include"AtributosMotores.h" 

#include pragma once

class CarroNormal : public MotorNormal, public AtributosCarros, public AtributosMotores
{
protected:
	MotorNormal motorNormal;
	
public: 
	CarroNormal();
	void setMotorNormal(MotorNormal elMotorNormal);
	MotorNormal getMotorNormal();
	
}