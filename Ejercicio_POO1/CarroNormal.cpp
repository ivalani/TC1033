#include"CarroNormal.h" 


CarroNormal::CarroNormal()
{
	motorNormal = MotorNormal(4);
}
void CarroNormal::setMotorNormal(MotorNormal elMotorNormal)
{
	motorNormal = elMotorNormal;
}
MotorNormal CarroNormal::getMotorNormal()
{
	return motorNormal;
}