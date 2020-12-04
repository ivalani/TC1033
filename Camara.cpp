#include"Camara.h" 

Camara::Camara()
{
	Resolucion = resolucion(3840 x 2160);
	FechaGrabacion = fechaGrabacion("4 de Diciembre");
}
void Camara::setResolucion(Resolucion laResolucion)
{
	Resolucion = laResolucion;
}
Resolucion Camara::getResolucion()
{
	return Resolucion; 
}
void Camara::setFechaGrabacion(fechaGrabacion laFechaGrabacion)
{
	FechaGrabacion = laFechaGrabacion;
}
FechaGrabacion Camara::getFechaGrabacion() 
{
	return FechaGrabacion; 
}