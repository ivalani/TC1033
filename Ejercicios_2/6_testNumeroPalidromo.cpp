#include <iostream>
using namespace std;

int main() {
    int num,n,rev=0;
    cin>>num;
    n=num;
    while(n>0){
       rev=rev*10+n%10;
       n=n/10;
    }
    if(num==rev){
       cout<<"El numero es palindromo. ";
    } 
    else{
       cout<<"El numero no es Palindromo. ";
    }
    return 0;
}