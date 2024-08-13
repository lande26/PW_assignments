#include<iostream>
using namespace std;
int main(){
    // while('a'<'b'){
    //     cout<<"kjs"<<endl;//as condition is always true so it will repeat infinte times
    // }
    // int i;
    // while(i=10){
    //     cout<<i<<endl;
    //     i++;
    // }
    int x=4,y=0,z;
    while(x>=0){
        if(x==y)
        break;
        else cout<<x<<" "<<y<<endl;
        x--;
        y++;
    }
}