#include"AtributosMotores.h" 

#pragma once 

class MotorNormal : public AtributosMotores

{
protected: 
	int NumCilindros;
	
public: 
	MotorNormal();
	MotorNormal(int NumCilindros);
	
	void setNumCilindros(int elNumCilindros);
	int getNumCilindros();
};