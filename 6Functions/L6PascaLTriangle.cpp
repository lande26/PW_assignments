 //               1
            //    1 1
            //    1 2 1
            //    1 3 3 1
            //    1 4 6 4 1
            //    1 5 10 10 5 1
// #include<iostream>
// using namespace std;
// int fact(int x){ //this arguemnet represents that while calling we are also sending some value
//          int fact=1;
//          for(int i=2; i<=x; i++){
//             fact*=i;
//          }
//          return fact; 
//                                                                                                                
// int combination(int i, int j){
//    int  icj= fact(i)/(fact(j)*fact(i-j));
//     return icj;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=i ; j++){
//             cout<<combination(i,j);
//         }
//         cout<<endl;
//     }
        
// }
// the above code has more time complexity (calculates same value for multiple times)
// therefore optimised code :
// by using previous calculated values = ncr+1 = (n-r)/(r+1)ncr
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        int curr =1; 
        for(int j=0; j<=i ; j++){
         cout<<curr<<" ";
         curr = curr*(i-j)/(j+1); 
            
        }
        cout<<endl;     
    }
        
}

















           