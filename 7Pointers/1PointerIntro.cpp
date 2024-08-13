#include<iostream>
using namespace std;
int main(){
    int x=4;
    int* p= &x; // int* (pointer) is like a datatype used to store address 

    cout<<&x<<endl;
    cout<<p;   //both will give same addresses
    // p will have its seperate address and value store there is address of x so thats why repersnt same address
}
//data_type* pointer_name;
