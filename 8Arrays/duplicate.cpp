#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter size of array:";
  cin>>n;
  int arr[n];
  for(int i=0; i<=n-1; i++){
    cin>>arr[i];
  }
 
//   bool flag= false;// elements duplicate
//   for(int i=0; i<=n-1; i++){
//     for(int j=0; j<=n-1; j++){
//         if(arr[i]==arr[j]){
//             flag =true;
//             cout<<arr[i]<<" ";
//             break;
//         }
//     }
//   }
//   if (flag==true)  cout<<" contains duplicate";
//   else cout<<" no duplicate";
// find the duplicate indices 
   for(int i=0; i<=n-1; i++){
    for(int j=i+1; j<=n-1; j++){
        if(arr[i]==arr[j]){
            cout<<arr[j]<<" ";
            break;
        }
    }
  }
}

