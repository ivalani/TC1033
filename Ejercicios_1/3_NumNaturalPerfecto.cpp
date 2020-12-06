//Programa que imprime si un número X es natural perfecto. 
#include<stdio.h>
#include<conio.h>
void main ( )
{
int c=2, d=1, a=0;
clrscr ( );
     for (c=2;c<=1000;c++)
    {for (d=1;c>d;d++)
    {f (c%d==0)
     a+=c;
     }
     if (c==a)
     printf ("n Numeros perfectos: %d",c);
     d=1;
     a=0;
    }getch ( );
}