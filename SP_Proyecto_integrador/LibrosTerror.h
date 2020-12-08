#include<string> 
using namespace std;
//Los libros(atributos) que tiene el genero Terror
#pragma once 
class LibrosTerror
{
protected:
	string Terror1;
	string Terror2;
	string Terror3;
	string Terror4;
	
public: 
	LibrosTerror();
	void setTerror1(string elTerror1);
	void setTerror2(string elTerror2);
	void setTerror3(string elTerror3);
	void setTerror(string elTerror4);
	
	string getTerror1();
	string getTerror2();
	string getTerror3();
	string getTerror4();
};