#include<iostream>
using namespace std;
int main(){
   int n1, n2, hcf;
    cout<<"Enter two numbers :";
    cin>>n1>>n2;

    if(n2>n1){
        int act = n2;
        n2  = n1;
        n1 = act;
    }
     for(int i = 1; i<=n2; i++){
        if (n1%i == 0 && n2 % i ==0){
            hcf = i;
        }
     }
     cout<<"hcf="<<hcf;

     return 0; 
}