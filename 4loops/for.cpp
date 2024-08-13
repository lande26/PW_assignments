#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    //AP
    // for(int i=1; i<=2*n-1; i+=2){
    //     cout<< i<<endl;
    // }
    //GP
    int a=1;
    for(int i=1; i<=n; i++){
        a*=2;
        cout<< a<<endl;
    }

}