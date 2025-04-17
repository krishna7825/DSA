#include<iostream>
#include<vector>
using namespace std;
int minimun(vector<int> arr,int n){
    int s =0;
    int e = n-1;
    int mid = s +(e-s)/2;
    while(s<e){
        if(arr[s] == arr[e]){
            cout<<arr[s]<<endl;
        }
        else if(arr[mid]>arr[mid+1]){
            cout<<arr[mid+1]<<endl;
        }
        else if(arr[mid]<arr[mid -1]){
            cout<<arr[mid]<<endl;
        }
        if(arr[mid]>arr[e]){
            s++;
        }
        else{
            e--;
        }
        mid = s +(e-s)/2;
    }
}
int main(){
    vector<int> arr{1};
    int n = arr.size();
     minimun(arr,n);
    // cout<<"Minimun Element = "<<ans<<endl;
    return 0; 
}