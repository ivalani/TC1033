#include <bits/stdc++.h>
using namespace std;
 
void TablaSundaram (bool cont[], int);
int Rotacion(int );
int conteo(int );

 
void circularPrime(int n)
{

cout << "Los numeros circulares que se encuentran de 0-100 son : \n";	

	int nNew = (n-2)/2;
	bool cont[nNew + 1];
	memset(cont, false, sizeof(cont));
	TablaSundaram(cont, nNew);
	cout << "2 " ;
	for (int i=1; i<=nNew; i++)
	{
		if (cont[i] == true)
			continue;
		int num = 2 * i + 1;
		num = Rotacion(num); 
		while (num != 2*i + 1)
		{
			if (num % 2 == 0) 
				break;
			if (cont[(num - 1)/2] == false)
				num = Rotacion(num);
			else
				break;
		}
		if (num == (2*i + 1))
			cout << num << " ";
	}
}
 
void TablaSundaram(bool cont[], int nNew)
{
	for (int i=1; i<=nNew; i++)
    	for (int j=i; (i + j + 2*i*j) <= nNew; j++)
	    	cont[i + j + 2*i*j] = true;
}
int Rotacion(int n)
{
	int rem = n % 10;	 
	rem *= pow(10, conteo(n));  
	n /= 10;  
	n += rem;	
	return n;
}
 
int conteo(int n)
{
	int digit = 0;
	while (n /= 10)
		digit++;
	return digit;
}
 
int main(void)
{
	int n = 100;
	circularPrime(n);
	
   
	return 0;
}