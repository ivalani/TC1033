//Haz un programa que imprima la suma de los múltiplos de 3 y 5 que están entre 0 y 1000
#include <iostream>
using namespace std;

void main()
{
	printf("La suma de los multipos de 3 y 5, del 0 al 1000")
	
	int sum = 0;
	int n = 1000;

	for(int i = 0; i < n; i++)
	{
		if(3*i < n)
			sum += 3*i;
		if(5*i < n && (5*i) % 3 != 0)
			sum += 5*i;
	}
	cout << "La suma total es: " << sum << endl;
	system("pause");
}