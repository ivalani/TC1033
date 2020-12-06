//Programa que imprime el número de números primos que hay entre 1 y 1000

#include <conio.h>
#include <stdio.h>

int main()
{
    int contador, n, primo;

    printf( "\n   " );

    for ( n = 1 ; n <=  1000; n++ )
    {
        primo = 1;
        contador = 2;

        while ( contador <= n / 2 && primo )
        {
            if ( n % contador == 0 )
                primo = 0;

            contador++;
        }

        if ( primo )
            printf( "%d ", n );
    }

    getch(); 

    return 0;
}