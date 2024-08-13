#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter positive number:";
    cin>>x;
    // if ((x%5==0 || x%3==0) && n%15!=0){
    //     cout<<"divisible by 5 or 3 not 15";
    // }
    // else{
    //     cout<<"no condition";
    // }
    if (x%5==0 || x%3==0){
        if(n%15!=0){
            cout<<"divisible";
        }
        else{
            cout<<"not matching";
        }
    }else{
        cout<<"not matching";
    }
    


}