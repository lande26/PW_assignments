#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<" enter number of rows :";
    cin>>n;
    int m=n-1;
    // for(int l=1; l<=2*n-1; l++){
    //     cout<<"*";
    // }
    // cout<<endl;

    // for (int i=1; i<=m; i++){            star bridge
    //     for(int j=1; j<=m+1-i; j++){
    //         cout<<"*";
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         // if(j==1) cout<<"*";
    //          cout<<" ";
    //     }
    //     for(int k=1; k<=m+1-i; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // number bridge
    for(int l=1; l<=2*n-1; l++){
        cout<<l;
    }
    cout<<endl;

    for (int i=1; i<=m; i++){
        int a=1;
        for(int j=1; j<=m+1-i; j++){
            cout<<a;
            a++;
        }
        for(int j=1; j<=2*i-1; j++){
            // if(j==1) cout<<"*";
             cout<<" ";
             a++;
        }
        for(int k=1; k<=m+1-i; k++){
            cout<<a;
            a++;
        }
        cout<<endl;
    
}
}