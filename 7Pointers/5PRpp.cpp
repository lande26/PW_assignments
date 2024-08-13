#include<iostream>
using namespace std;
void func(int x, int* ptr1, int* ptr2){
    *ptr2=x%10;
    while(x>=10){
        x/=10;

    }
   *ptr1 = x;
    return;
}
int main(){
   int x;
   cin>>x;
   int firstDigit, LastDigit;
   int* ptr1= &firstDigit;
   int* ptr2= &LastDigit;
    // while(x>=10){
    //     x/=10;

    // }
    // cout<<x<<endl;
    func(x, ptr1, ptr2);
    cout<<firstDigit<<" "<<LastDigit;
}