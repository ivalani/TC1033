#include<string> 
using namespace std;
//Los libros(atributos) que tiene el genero Romance 
#pragma once 
class LibrosRomance
{
protected:
	string Romance1;
	string Romance2;
	string Romance3;
	string Romance4;
	
public: 
	LibrosRomance();
	void setRomance1(string elRomance1);
	void setRomance2(string elRomance2);
	void setRomance3(string elRomance3);
	void setRomance4(string elRomance4);
	
	string getRomance1();
	string getRomance2();
	string getRomance3();
	string getRomance4();
};