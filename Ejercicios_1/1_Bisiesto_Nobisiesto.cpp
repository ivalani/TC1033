//Realiza un programa en C++ que imprime “Sí es bisiesto” o “No es bisiesto” si un valor numérico (variable int) que representa el valor de un año es bisiesto o no 

#include <conio.h>
#include <stdio.h>

int main()
{
    int anio;

    printf( "\n   Introduzca un a%co: ", 164 );
    scanf( "%d", &anio );

    if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
        printf( "\n   Es bisiesto" );
    else
        printf( "\n   No es bisiesto" );

    getch(); /* Pausa */

    return 0;
}