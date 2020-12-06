//Crea un programa que imprima los dígitos (de manera individual) de un número 5 cifras

#include <iostream>

int main() {
    int num = 0, NuevoNum = 0;
    int divisor = 1;
    
    std::cout << "Ingrese un número de 5 cifras: ";
    std::cin >> num;
    
    NuevoNum = num;
                
    while(NuevoNum/10!=0){              
        NuevoNum = NuevoNum/10;         
        divisor = divisor*10;            
    }
    
    while(divisor!=0){
        std::cout << num/divisor;
        if(divisor/10!=0){
            std::cout << ",";
        }
        num = num%divisor;
        divisor = divisor/10;
    }
    std::cout << "\n";
    return 0;
}
