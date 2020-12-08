#include <iostream>
using namespace std;
int NumMenor(int n_num[], int n)
{
   int num = n_num[0];
   for(int i=0; i<n; i++) {
      if(num>n_num[i]) {
         num=n_num[i];
      }
   }
   return num;
}
int main() {
   int n;
   cout<<"¿Cuantos numeros quiere comparar?:  ";
   cin>>n; int n_num[n-1];
   cout<<"\nIngrese "<<n<<" cifras";
   for(int i=0; i<n; i++){
      cin>>n_num[i];
   }
   int Menor = NumMenor(n_num, n);
   cout<<"\nEl numero menor entre los ingresados fue: "<<Menor;
   return 0;
}