#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter a number:";
    cin>>n;//1-2+3-4+5-6...... series sum
    int sum=0;
    // for(int i=1; i<=100; i++){
    //     if(i%2!=0){
    //         sum+=i;
    //     }else{
    //         sum-=i;
    //     }
    // }
    if(n%2==0) sum = -n/2;
    else sum = -n/2 + n;//-n/2+n != n/2 
    cout<<sum;
}