#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
    string s;
    int t[100],v=0;
    cin>>s;
    int q=s.length();
    for(int i=0;i<s.length();i++)
    {
      q--;
      t[i]=s.at(i);
      t[i]=t[i]-48;
      v=v+t[i]*pow(2,q);
    }
    cout<<v;
     return 0;
}