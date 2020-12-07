//Programa que imprime si un número X es natural perfecto. 
#include <iostream>
using namespace std;

int main() {
    cout << "Ingrese un numero para saber si es natural perfecto:\n";
    int num, sum, i;
    cin >> num;
    for(i=1;i<=num;i++)
    {
        if(num % i == 0)
        {
            sum +=i;
        }
    }
    if(num == (sum/2))
    {
        cout <<num <<" Es un numero natural perfecto";
    }
    else
    {
        cout << num <<" No es un numero natural perfecto";
    }
    return 0;
}