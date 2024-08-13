#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* p = &x;// we can only store address in pointer
    cout<< x<<endl;
    *p = 6;
    // cout<< *p;// p ke andar jo address rakha hai us address pe jao and vaha ki value print akrdo
    cout<<x;
}