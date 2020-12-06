#include"AtributosMotores.h" 

#pragma once 
class MotorElectrico : public AtributosMotores
{
protected:
	int NumBaterias;
	
public:
	MotorElectrico();
	MotorElectrico(int NumBaterias);
	
	void setNumBaterias(int elNumBaterias);
	int getNumBaterias();
};