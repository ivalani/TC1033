//Realiza un programa en C++ que imprime “Sí es bisiesto” o “No es bisiesto” si un valor numérico (variable int) que representa el valor de un año es bisiesto o no 

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Ingrese un año para saber si es bisiesto o no: ";
    cin >> x;
    if ((x % 4 == 0) && (x % 400 == 0)) {     
        cout << x << " es bisiesto";
    }
    else if ((x % 4 == 0) && (x % 100 == 0)) {
        cout<< x << " no es bisiesto";
    }
    else if (x % 4 == 0) {
        cout<< x << " es bisiesto";
    }      
    else {
        cout << x << " no es bisiesto";
    }
    return 0;
}