#include "Tienda.h"
#include"LibrosTerror.h" 
#include"LibrosRomance.h" 
#include"LibrosHistoria.h" 
#include"LibrosDrama.h"
#include"LibrosPoesia.h" 
#include<string>
#include<iostream>

using namespace std;

void menu(int,string *);
int selecionarArticulo(int);

float compra(int,string *,float *);

int main()
{

    string Generos[]=
    {"Poesia","Terror","Romance","Drama","Historia"};
    int selector;
    float total = 0.0;
    bool finalizarCompra = false;
    while(!finalizarCompra)
    {
        cout<<"Hola desea comprar un libro, seleccione un genero: "<<endl;
        cout<<"-----Generos disponibles: ----- "<<endl;
        menu(5,Generos);

        do{

           selector = selecionarArticulo(5);
        }while(selector == -1);
        switch(selector){
            case 0:{
                int cant_Seccion_de_Poesia = 4;
                string Seccion_de_Poesia[cant_Seccion_de_Poesia]
                ={"El sol y sus flores -- $20","Antalogia poetica -- $50","20 poemas de amor -- $45","Hojas de hierba -- $30"};
                float precios[cant_Seccion_de_Poesia]=
                {20.0,50.0,45.0,30.0};
                cout<<"Menu de libros de: "<<Generos[selector]<<endl;
                total += compra(cant_Seccion_de_Poesia,Seccion_de_Poesia,precios);
                break;
                }
            case 1:{
                int cant_Seccion_de_Terror = 4;
                string Seccion_de_Terror[cant_Seccion_de_Terror]
                ={"Dracula -- $35","It -- $80","Misery -- $100","El gato negro -- $40"};
                float precios[cant_Seccion_de_Terror]=
                {35.0,80.0,100.0,40.0};
                cout<<"Menu de libros de: "<<Generos[selector]<<endl;
                total += compra(cant_Seccion_de_Terror,Seccion_de_Terror,precios);
                break;
                }
            case 2:{
                int cant_Seccion_de_Romance = 4;
                string Seccion_de_Romance[cant_Seccion_de_Romance]
                ={"Orgullo y prejuicio -- $70","Bajo la misma estrella -- $35","Cumbres borrosas -- $50","El amor en tiempos de colera -- $45"};
                float precios[cant_Seccion_de_Romance]=
                {70.0,35.0,50.0,45.0};
                cout<<"Menu de libros de: "<<Generos[selector]<<endl;
                total += compra(cant_Seccion_de_Romance,Seccion_de_Romance,precios);
                break;
                }
            case 3:{
                int cant_Seccion_de_Drama = 4;
                string Seccion_de_Drama[cant_Seccion_de_Drama]
                ={"Sueños de papel -- $20","Khalil -- $45","Cortando el aire -- $15","Dear Amy -- $50"};
                float precios[cant_Seccion_de_Drama]=
                {20.0,45.0,15.0,50.0};
                cout<<"Menu de libros de: "<<Generos[selector]<<endl;
                total += compra(cant_Seccion_de_Drama,Seccion_de_Drama,precios);
                break;
                }
            case 4:{
                int cant_Seccion_de_Historia = 4;
                string Seccion_de_Historia[cant_Seccion_de_Historia]
                ={"Guerra y paz -- $200","Homo Deus -- $45","1001 Batallas -- $55","Historia de Mexico -- $90"};
                float precios[cant_Seccion_de_Historia]=
                {200.0,45.0,55.0,90.0};
                cout<<"Menu de libros de: "<<Generos[selector]<<endl;
                total += compra(cant_Seccion_de_Historia,Seccion_de_Historia,precios);
                break;
                }
        }
        char op;
        cout<<"\n¿Quiere terminar la compra?(s/n) ";
        cin>>op;
        if(op=='S'||op=='s'){
            finalizarCompra=true;
        }
    }




    return 0;
}


void menu(int cant_clases_de_articulos,string *clases_de_articulos){
    for(int i=0;i<cant_clases_de_articulos;i++)
    {
      cout<<i+1<<". "<<clases_de_articulos[i]<<endl;
    }
}

int selecionarArticulo(int cant_clases_de_articulos){
    int selector;
    cout<<"Selccione: "<<endl;
    cin>>selector;
    if(selector>0 && selector <= cant_clases_de_articulos){
        return selector-1;
    }
    cout<<"No se puede seleccionar "<<selector<<"por que no existe"<<endl;
    return -1;
}


float compra(int cant_clases_de_articulos,string *clases_de_articulos,float *presios_por_clase_de_articulos){

    int cantindad;
    int selector;
    float total;
    menu(cant_clases_de_articulos,clases_de_articulos);
    do{
        selector = selecionarArticulo(cant_clases_de_articulos);
    }
    while(selector==-1);

    cout<<"Ingrese el numero de libros que quiere de "<<clases_de_articulos[selector]<<": ";
    cin>>cantindad;

    total = cantindad * presios_por_clase_de_articulos[selector];
    cout<<"\nSe suma a la cuenta: "<<total;
    return total;
	
	
}