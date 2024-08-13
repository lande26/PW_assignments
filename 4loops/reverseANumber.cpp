#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter a number :";
    cin>>n;
    int digit=0,reverse=0;
    while(n>0){
        reverse=reverse*10;
        digit=n%10;
        reverse+=digit;
        n/=10;
    }
    cout<<reverse;
}