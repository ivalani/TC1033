#include<iostream>
using namespace std;

void binario(int num)
{
	int rem;
	

	if (num <= 1)
	{
		cout << num;
		return;
	}
	rem = num % 2;
	binario(num / 2);
	cout << rem;
}

int main()
{
	int dec, bin;
	cout << "Ingrese un numero: ";
	cin >> dec;

	if (dec < 0)
		cout << dec << "Por favor ingrese un numero positivo." << endl;
	else
	{
		cout << "\n el numero binario de "<< dec << " es ";
		binario(dec);
		cout << endl;
	}
	return 0;
}
