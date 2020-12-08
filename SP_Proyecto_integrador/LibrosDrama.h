#include<string> 
using namespace std;
//Los libros(atributos) que tiene el genero drama
#pragma once 
class LibrosDrama
{
protected:
	string Drama1;
	string Drama2;
	string Drama3;
	string Drama4;
	
public: 
	LibrosDrama();
	void setDrama1(string elDrama1);
	void setDrama2(string elDrama2);
	void setDrama3(string elDrama3);
	void setDrama(string elDrama4);
	
	string getDrama1();
	string getDrama2();
	string getDrama3();
	string getDrama4();
};
