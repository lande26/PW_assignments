#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter a number :";
    cin>>n;
    // if(n%5==0){
    //     cout<<"divisible";
    // }else{
    //     cout<<"not divisible";
    // }
    if(n%5==0 || n%3==0){
        cout<<"divisible";
    }else{
        cout<<"not divisible";
    }
    return 0;
}