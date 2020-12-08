#include <iostream>
using namespace std;

int main ()

 {int n_num=0, num=0, mayor=0, c=0;
 cout<<"¿Cuantos numeros quieres compara? :\n";
 cin >>n_num ;
 for (c=1; c<=n_num;c++)
 
 { cout <<"\nintroduce las cifras: " <<c<<":";    cin>>num; if(num>mayor)
 {
 mayor=num;
 }
 }
 cout << "\n El numero mayor entre todos los ingresados fue: " <<mayor;
 cin . get () ; cin.get();
    return 0;
}