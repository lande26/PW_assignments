#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c;
    int n;
    cin>>n;
    for(int i=1; i<=n-2; i++){
        c=a+b;
        a=b;
        b=c;
    }
      cout<<c; 
      }