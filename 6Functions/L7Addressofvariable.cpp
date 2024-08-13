#include<iostream>
using namespace std;
void func(int x, int y){// the x and y recieving values are formal parameters
    cout<<&x;
}

int main(){
    int x=3;
    int y = 7; 
    cout<<&x<<endl;//& gives address
    func(x,y);//here x and y are catual paramaters
}