#include<string>
using namespace std;
//En padreCamara se incluyen los atributos que se repiten entre todos 
#pragma once
class padreCamara
{
protected:
    string Marca; 
	string Modelo;

public:
    void setMarca(string laMarca);
    void setModelo(string elModelo);
    string getMarca();
    string getModelo();
};