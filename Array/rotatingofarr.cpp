#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
    for(int i =n-1;i>0;i--){
       ar[n-3]=arr[i-1];
    }
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<ar[i];
    }


    return 0;
}