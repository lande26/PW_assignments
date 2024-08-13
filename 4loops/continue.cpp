#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=100; i++){
        if(i%2==0) continue;//continue skips that iteration or round (it skips it)
        cout<<i<<endl;
    }
}