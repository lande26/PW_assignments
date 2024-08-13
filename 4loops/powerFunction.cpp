2#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<" enter number :";
    cin>>a;
    cout<<" enter power :";
    cin>>b;
    bool flag = true;// true means power is positive
    if(b<0){
        flag = false;// false --> negative power
        b=-b;
    }
   float power = 1;
    for(int i=1; i<=b; i++){
        power*=a;
    }
    if(flag==false){
        power=1/power;
        b=-b;
    }
    if(a==0 && b==0) cout<<"not defined";
    else cout<<a<<" raised to power "<<b<<" is "<<power;
}