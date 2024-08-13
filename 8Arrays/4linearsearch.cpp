#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<=n-1; i++){
    cin>>arr[i];
  }
  int x;
  cin>>x;
  // checkmark flag
  bool flag= false;// element not present
  for(int i=0; i<=n-1; i++){
    if(arr[i]==x) flag = true;
  }
  if (flag==true)  cout<<"element found";
  else cout<<" not found";
}