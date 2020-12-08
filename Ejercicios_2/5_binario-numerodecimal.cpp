#include <iostream>
using namespace std;


int main() 
{
    long bin, dec = 0, rem, num, base = 1;
    
    cout << "Ingrese un numero binario :\n";
    cin >> num ;
    
    while ( num > 0)
    {
       rem = num % 10;
       dec = dec + rem * base;
       base = base * 2;
       num = num / 10;

    }
    
    cout << "El numero decimal es: " << dec << endl ;
    
    return 0;
}