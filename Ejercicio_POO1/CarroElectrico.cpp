#include"CarroElectrico.h"


CarroElectrico::CarroElectrico()
{	
	motorelectrico = Motorelectrico(14);
}
void CarroElectrico::setMotorElectrico(Motorelectrico elMotorElectrico)
{
	motorelectrico = elMotorElectrico;
}
Motorelectrico CarroElectrico::getMotorElectrico()
{
	return motorelectrico;
}