//Programa que indica si un valor X es un número circular primo
#include <iostream>
#include <cmath>
using ull = unsigned long long;

ull digitsOf(ull n) {
    
    return (n ? log10(n) + 1 : 1);
}

bool isPrime(const ull num) {

    if (num < 2) { return false; }

    for (ull i = 2; i <= sqrt(num); ++i) {
    
        if (!(num % i)) {return false;}
    }
    
    return true;           
}

void shiftNumber(ull& numero) {

    if (digitsOf(numero) > 1) {

        short lastDigit = numero % 10;
    
        numero /= 10;
    
        numero += (pow(10, digitsOf(numero)) * lastDigit);
    }  
}

bool isCircularPrime(ull numero) {

    bool prime {true};
    
    for (std::size_t i {0}; i < digitsOf(numero); ++i) {
    
        if (!isPrime(numero)) {
            prime = false;
        }
    
        std::cout << numero << " => " << (prime ? "primo" : "no es primo") << std::endl;
        
        shiftNum(numero); 
    }
    
    return prime;    
}

int main() {

    ull numero {};
    
    std::cout << "Numero circular";
    std::cout << "Ingrese la cifra para saber si es un numero circular primo: ";
    
    try {
    
        std::cin >> numero;                
            if (std::cin.fail()) {
                throw "Valor invalido, intente nuevamente.";
            }        
        std::cout << numero << std::endl;
        
        if (isCircularPrime(num)) {
            std::cout << numero << " Es un numero circular primo." << std::endl;
        }
        else {
            std::cout << numero << " No es un numero circular primo." << std::endl;
        }
        
    }
    
    catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;  
    }
    
    return 0;
}