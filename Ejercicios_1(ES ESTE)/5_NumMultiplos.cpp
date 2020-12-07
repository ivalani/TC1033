//Haz un programa que imprima la suma de los múltiplos de 3 y 5 que están entre 0 y 1000
#include <iostream>
using namespace std;

int main()
{
    int b[2] = {3, 5};
    cout<<"Los multiplos de 3 y 5 en un rango de 0-1000 son:\n";

while( b[0] <= 1000  )
{
    cout << b[0] << endl;
    b[0] = b[0] + 3;
    
if( b[1] <= 1000 )
{
if ( b[0] > b[1])
{
    cout << b[1] << endl ;
b[1] = b[1]+5;
}
    }}
       return 0;
}