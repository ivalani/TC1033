#include"MotorElectrico.h" 

MotorElectrico::MotorElectrico()
{
	NumBaterias = 14;
}
MotorElectrico::MotorElectrico(int elNumBaterias)
{
	NumBaterias = elNumBaterias;
}
void MotorElectrico::setNumBaterias(int elNumBaterias)
{
	NumBaterias = elNumBaterias;
}
int MotorElectrico::getNumBaterias()
{
	return NumBaterias;
}