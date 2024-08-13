#include<iostream>
using namespace std;
void func(int arr[], int size){// it is pass by reference as pointing towards same array
    for(int i=0; i<=size-1; i++){
         cout<<arr[i]<<" ";

    }
    cout<<endl; 
    return;
 }
 void change(int b[]){
    b[0]=100;
 }
int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing the elements of array in another func
    // updation
    func(arr,size);// function ko array ka address bhej rahe hai as &a and a are samething
    change(arr,size);
    func(arr,size);

}
