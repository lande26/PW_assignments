#include<iostream>
using namespace std;
int main(){
    // int a=8;
    // int* ptr = &a;
    // cout<<ptr<<endl;//0x61ff08
    // ptr = ptr + 1; // we are moving 4 bytes forward as int pointer is defined
    // cout<<ptr<<endl;//0x61ff0c gives differenet addresses

    int a=8;
    int* ptr = &a;
    cout<<*ptr<<endl;//8
    ptr = ptr + 1; 
    cout<<*ptr<<endl;//6422284-- garbage value as after changing address there is nothing out there


}
