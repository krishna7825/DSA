#include<iostream>
using namespace std;
void Fancy_12(int n){
    for(int i =0;i<5;i++){
    for(int j = 0;j<2*i+1;j++){
        if(j%2==0){
            cout<<i+1;
        }
        else{
            cout<<"*";
        }
    }
        cout<<endl;
   }
}
void Full_Fancy_12(int n){
     for(int i =0;i<5;i++){
    for(int j = 0;j<2*i+1;j++){
        if(j%2==0){
            cout<<i+1;
        }
        else{
            cout<<"*";
        }
    }
        cout<<endl;
   }
   int x =4;
   for(int i =0;i<x;i++){
    for(int j =0;j<2*(x-i)-1;j++){
        if(j%2==0){
            cout<<(x-i);
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
   }
}
int main(){
    int n ; 
    cout<<"Enter the number : ";
    cin>>n;
  // Fancy_12(n);
  Full_Fancy_12(n);
    return 0;
}