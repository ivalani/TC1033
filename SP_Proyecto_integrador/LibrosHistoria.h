#include<string> 
using namespace std;
//Los libros(atributos) que tiene el genero Historia 
#pragma once 
class LibrosHistoria
{
protected:
	string Historia1;
	string Historia2;
	string Historia3;
	string Historia4;
	
public: 
	LibrosHistoria ();
	void setHistoria1(string laHistoria1);
	void setHistoria2(string laHistoria2);
	void setHistoria3(string laHistoria3);
	void setHistoria4(string laHistoria4);
	
	string getHistoria1();
	string getHistoria2();
	string getHistoria3();
	string getHistoria4();
};