#include<iostream>
using namespace std;
int main(){
//     int x;
//     cin>>x;
//     condition ? true : false
//     x%2==0 ? cout<<"even": cout<<"odd" ;
int x;
x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;//heriarchy from right to left
cout<<"value of x :"<<x;
return 0;
}