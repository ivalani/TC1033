#include"LibrosDrama.h" 

LibrosDrama::LibrosDrama()
{
	cout<<"Genero Dramatico"
}
void LibrosDrama::setDrama1(string elDrama1)
{
	LibrosDrama=elDrama1;
}
void LibrosDrama::setDrama2(string elDrama2)
{
	LibrosDrama=elDrama2;
}
void LibrosDrama::setDrama3(string elDrama3)
{
	LibrosDrama=elDrama3;
}
void LibrosDrama::setDrama(string elDrama4)
{
	LibrosDrama=elDrama4;
}

string LibrosDrama::getDrama1()
{
	return Drama1;
}
string LibrosDrama::getDrama2()
{
	return Drama2;
}
string LibrosDrama::getDrama3()
{
	return Drama3;
}
string LibrosDrama::getDrama4()
{
	return Drama4;
}