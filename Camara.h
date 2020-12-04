#include"TarjetaMemoria.h"
#include"ProcesadorGrafico.h" 
#include"padreCamara.h"

#pragma once
class Camara : public padreCamara, public ProcesadorGrafico, public TarjetaMemoria
{
protected:
    Resolucion resolucion
	FechaGrabacion fechaGrabacion

public:
    Camara();
	void setResolucion(Resolucion laResolucion);
	Resolucion getResolucion();
	void setFechaGrabacion(fechaGrabacion laFechaGrabacion);
	FechaGrabacion getFechaGrabacion(); 
	
};