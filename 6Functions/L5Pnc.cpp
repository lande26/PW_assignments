#include<iostream>
using namespace std;
int fact(int x){ //this arguemnet represents that while calling we are also sending some value
         int fact=1;
         for(int i=2; i<=x; i++){
            fact*=i;
         }
         return fact; 
    }
int combination(int n, int r){
   int  ncr= fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n, int r){
   int  npr = fact(n)/(fact(n-r));
    return npr;
}
int main(){
  int n,r;
  cout<<"enter n :";
  cin>>n;
  cout<<"enter r :";
  cin>>r;
//   int nfact=1,rfact=1, nrfact=1;
  if(n<r) cout<<"Not defined";
//    for(int i=2; i<=n; i++){
//         nfact*=i;
//     }
  
//    for(int i=2; i<=r; i++){
//         rfact*=i;
//     }
  
//      for(int i=2; i<=n-r; i++){
//         nrfact*=i;
//     }
    // int nfact = fact(n);
    // int rfact = fact(r);
    // int nrfact = fact(n-r);
    // int ncr = nfact/(rfact*nrfact);
    int ncr = combination(n,r);
    int npr = permutation(n,r);
   cout<< ncr<<endl<<npr;
} 
