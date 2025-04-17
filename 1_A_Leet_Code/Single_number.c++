#include<iostream>
using namespace std;
//Using Xor Method 
void XOR_Method (int arr[],int n){
int ans = 0;
   for(int i =0;i<n;i++){
    ans = ans ^ arr[i];
    }
    cout<<"Unique Number = "<<ans;
}
// Using for loop
void Loop_Method(int arr[],int n){
    int ans =0;
    for(int i =0;i<n;i++){
        for(int j =1;j<n;j++){
            ans = arr[i]^arr[j];
        }
    }
     cout<<"Unique Number = "<<ans;
}
int main(){
   int arr[]={1,2,3,4,5,5,1,2,3};
   int n = sizeof(arr) / sizeof(arr[0]);
   //XOR_Method(arr,n);
   Loop_Method(arr,n);
   
   
    return 0;
}