//Programa que indica si un valor X es un número circular primo
#include <iostream>
#include <cmath>
using ull = unsigned long long;

ull digitos(ull n) {
    
    return (n ? log10(n) + 1 : 1);
}

bool Primo(const ull numero) {

    if (numero < 2) { return false; }

    for (ull i = 2; i <= sqrt(numero); ++i) {
    
        if (!(numero % i)) {return false;}
    }
    
    return true;           
}

void shiftNum(ull& num) {

    if (digitos(num) > 1) {

        short UltimoDigito = num % 10;
    
        num /= 10;
    
        num += (pow(10, digitos(num)) * UltimoDigito);
    }  
}

bool PrimoCircular(ull num) {

    bool primo {true};
    
    for (std::size_t i {0}; i < digitos(num); ++i) {
    
        if (!Primo(num)) {
            primo = false;
        }
    
        std::cout << num << " => " << (primo ? "primo" : "no primo") << std::endl;
        
        shiftNum(num); 
    }
    
    return primo;    
}

int main() {

    ull num {};
    
    std::cout << "¿n numero es primo circular?\n\n";
    std::cout << "ingresa un numero para saberlo: ";
    
    try {
    
        std::cin >> num;                
            if (std::cin.fail()) {
                throw "Dato invalido, intente de nuevo";
            }        
        std::cout << num << std::endl;
        
        if (PrimoCircular(num)) {
            std::cout << num << " Es un numero primo circular. " << std::endl;
        }
        else {
            std::cout << num << " No es un numero primo circular. " << std::endl;
        }
        
    }
    
    catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;  
    }
    
    return 0;
}