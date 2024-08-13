#include<iostream>
using namespace std;
int a=9;// it is global varfiable can be used or caal by any function 
void func(int x, int y){// the x and y recieving values are formal parameters
    cout<<&x;
}
void f(){
    cout<<a;
}
int main(){
    // int x=3;
    // int y = 7; 
    // cout<<&x<<endl;//& gives address
    // func(x,y);//here x and y are catual paramaters
    int a=9;// it is local variable its scope is limited to thi specific function only

}
