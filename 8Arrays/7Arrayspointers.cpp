#include<iostream>
using namespace std;
int main(){
    int arr[]= {2,3,4,5,6};
    int* ptr = arr;
    for(int i=0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
 
}  





