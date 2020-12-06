#include"MotorNormal.h" 

MotorNormal::MotorNormal()
{
	NumCilindros = 4;
}
MotorNormal::MotorNormal(int NumCilindros)
{
	NumCilindros = NumCilindros;
}
void MotorNormal::setNumCilindros(int elNumCilindros)
{
	NumCilindros = elNumCilindros;
}
int MotorNormal::getNumCilindros()
{
	return NumCilindros;
}