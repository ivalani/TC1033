#include<string> 
using namespace std;
//Los libros(atributos) que tiene el genero poesia 
#pragma once 
class LibrosPoesia
{
protected:
	string Poesia1;
	string Poesia2;
	string Poesia3;
	string Poesia4;
	
public:
	LibrosPoesia();
	void setPoesia1(string laPoesia1);
	void setPoesia2(string laPoesia2);
	void setPoesia3(string laPoesia3);
	void setPoesia4(string laPoesia4);
	
	string getPoesia1();
	string getPoesia2();
	string getPoesia3();
	string getPoesia4();
};