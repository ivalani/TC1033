#include"LibrosTerror.h" 
#include"LibrosRomance.h" 
#include"LibrosHistoria.h" 
#include"LibrosDrama.h"
#include"LibrosPoesia.h" 

#pragma once 
class Tienda : public LibrosTerror, public LibrosRomance, public LibrosHistoria, public LibrosDrama, public LibrosPoesia
{

private:
LibrosTerror libroterror;
LibrosRomance libroromance;
LibrosHistoria librohistoria;
LibrosDrama librodrama;
LibrosPoesia libropoesia;

public:
Tienda ();
void setLibrosTerror (LibrosTerror ellibroterror);
LibrosTerror getLibrosTerror();
void setLibrosRomance (LibrosRomance ellibroromance);
LibrosRomance getLibrosRomance ();
void setLibrosHistoria (LibrosHistoria ellibrohistoria);
LibrosHistoria getLibrosHistoria ();
void setLibrosDrama (LibrosDrama ellibrodrama);
LibrosDrama getLibrosDrama();
void setLibrosPoesia (LibrosPoesia ellibropoesia);
LibrosPoesia getLibrosPoesia ();

};