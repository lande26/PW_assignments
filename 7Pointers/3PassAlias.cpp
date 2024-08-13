#include<iostream>
using namespace std;
void swap(int &a, int &b){// pass by reference
    int temp= a;
     a = b;
     b = temp;
    return; // this is called as pass by refrence as value of address stored is changed
}
int main(){
    int a=6,b=8,temp;
    // cin>>a>>b;
    swap(a,b);
    // temp=a;
    // a=b;
    // b=temp;
    cout<<a<<" "<<b;// this is value of main function a and b only values are going to function this is pass by value not pass by reference
}