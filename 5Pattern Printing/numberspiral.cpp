#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<" enter number of rows :";
    cin>>n;
    // 1111     //1111111
    // 1222       1222221
    // 1233       1233321
   //  // 1234    1234321
   //             1233321
   //             1222221
   //             1111111
   for(int i=1; i<=2*n-1; i++){
      for(int j=1; j<=2*n-1; j++){
         int a = i;
         int b = j;
         if(a>n) a=2*n-i;
         if(b>n) b=2*n-j; // sudo variables as we have changed values ofi anj from 567 to 321
         int x = min(a,b);
         cout<<x;
         cout<<n-x+1; // 4444444
                        //  4333334
                        // 4322234
                        // 4321234
                        //  4322234
                        //   4333334
                        //   4444444
      }
      cout<<endl;
   }
}