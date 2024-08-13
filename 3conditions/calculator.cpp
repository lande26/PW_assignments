#include<iostream>
using namespace std;
int main(){
    int x1,x2;
    char ch;
    cout<<"enter the problem";
    cin>>x1>>ch>>x2;
    switch(ch){
        case '+':
        cout<<x1+x2;
        break;
         case '-':
        cout<<x1-x2;
        break;
         case '*':
        cout<<x1*x2;
        break;
         case '/':
        cout<<x1/x2;
        break;
    }
}