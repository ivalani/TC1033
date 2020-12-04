#include<string>
#include"padreCamara.h" 
#include"AtributosComunes.h"

using namespace std;

#pragma once
class ProcesadorGrafico : public AtributosComunes, public padreCamara
{
protected:
    string TipoTarjeta;

public:
    ProcesadorGrafico();
    ProcesadorGrafico(string TipoTarjeta);

    void setTipoTarjeta(string elTipoTarjeta);
    string getTipoTarjeta();
};