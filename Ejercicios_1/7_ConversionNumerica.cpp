#include<iostream>
//Invierte un número de 6 cifras

using namespace std;
int main(){
 int num,resto,numInvertido=0;
 
 cout<<"Ingrese el numero a invertir:"<<endl;
 cin>>num;
 while(num>0){
         resto=num%10;
     num=num/10;
     numInvertido=numInvertido*10+resto;
 }
 cout<<"El numero invertido es: "<<numInvertido;
 return 0;
} 