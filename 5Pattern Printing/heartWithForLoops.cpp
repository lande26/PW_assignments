#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=10;
    string str="";
    for( int i=n/2; i<n; i += 2){
        for(int j=1; j<n -i; j+=2){
            str +=" ";
        }
        for (int j=1; j<i+1; j++){
        str +="*";
        }
        for (int j=1; j<n-i+1; j++){
        str +=" ";
        } 
        for (int j=1; j<i+1; j++){
        str +="*";
        }
        str +="\n";
    }
    for(int i=n; i>0; i--){
        for(int j=0; j<n-i; j++){
            str += " ";
        }
        for(int j=1; j<i*2; j++){
            str += "*";
        }
        str +="\n";
    }
    cout<< str;
    return 0;

}