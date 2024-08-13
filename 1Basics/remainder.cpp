#include<iostream>
using namespace std;
int main(){
    int a=16, b=3;
    // int q = a/b;
    // int r;
    // r = a-(q*b);
    // cout<<r;
    int r= a%b;//a and b both must be integers
    cout << r;
    //if a>b a%b gives remainder 
    //if a<b a%b gives a (remainder as divident is less than divisor)
    // a%b=a%(-b) -a%b=(-a%b)
}