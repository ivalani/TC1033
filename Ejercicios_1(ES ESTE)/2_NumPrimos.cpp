//Programa que imprime el número de números primos que hay entre 1 y 1000

#include<iostream>

using namespace std;

int main(){
	short int i = 2, j = 1;
	
	cout<<"Los numeros primos entre 1-100 son:\n"<<endl;
	
	while(i <= 1000){
		int cont = 0;
		while(j <= i){
			if(i%j == 0){
				cont++;
			}
			j++;
		}
		if(cont == 2){
			cout<<i;
			if(i < 997){
				cout<<", ";
			}else{
				cout<<".\n"<<endl;
			}
		}
		i++;
		j = 1;
	}
	
	return 0;
}