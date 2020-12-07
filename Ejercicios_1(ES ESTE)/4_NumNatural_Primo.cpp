#include<iostream>

using namespace std;

int main(){
	short int i = 2, j = 1;
	
	cout<<"Los numeros naturales primos entre 1-100000 son:\n"<<endl;
	
	while(i <= 1000000){
		int cont = 0;
		while(j <= i){
			if(i%j == 0){
				cont++;
			}
			j++;
		}
		if(cont == 2){
			cout<<i;
			if(i < 99997){
				cout<<", ";
			}else{
				cout<<".\n"<<endl;
			}
		}
		i++;
		j = 1;
	}
	
	return 0;