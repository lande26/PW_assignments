#include<iostream>
using namespace std;
int main(){
    int x =5 ;
    int* ptr = &x;
    int** p= &ptr;//double pointer is used to store the adress of pointer
    //   cout<<ptr<<endl;
    //   cout<<p<<endl;
        cout<<*ptr<<endl;
        cout<<**p<<endl;
   
}