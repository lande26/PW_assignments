#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st number";
    cin>>a;
    cout<<"enter 2nd number";
    cin>>b;
    cout<<"enter 3rd number";
    cin>>c;
    if(a>c && a>b){
        cout<<a<<"a is greatest";
    }
    if (b>a && b>c){
        cout<<b<<"b is greatest";
    }
    if (c>a && c>b){
        cout<<c<<"c is greatest";
    }

}