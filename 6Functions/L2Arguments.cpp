//<void/float/int> function_name(int a, int b, int c){ inside bracket thing are arguements 
// }
#include<iostream>
using namespace std;
void starTriangle(int x){ //this arguemnet represents that while calling we are also sending some value
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
int main(){
    starTriangle(3);
    starTriangle(4);
    starTriangle(5);

}