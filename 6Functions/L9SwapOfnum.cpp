#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int a,b,temp;
    cin>>a>>b;
    swap(a,b);
    // temp=a;
    // a=b;
    // b=temp;
    cout<<a<<" "<<b;// this is value of main function a and b only values are going to function this is pass by value not pass by reference
}