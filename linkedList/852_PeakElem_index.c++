#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Method 1
int Peak_index(vector<int>arr,int n){
    // using e = mid case 
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;
    while (s<e)
    {
       if(arr[mid]<arr[mid+1]){
        s = mid +1;
       }
       else{
        e = mid;
       }
       mid = s +(e-s)/2;
    }
    return s;
}
// Method 2
int Peak_index1(vector<int>arr,int n,int ansIndex){
    // using store and compute the logical things
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;
    
    while (s<=e)
    {
       if(arr[mid]<arr[mid+1]){
        s = mid +1;
       }
       else{
        ansIndex = mid;
        e = mid-1;
       }
       mid = s +(e-s)/2;
    }
    return ansIndex ;
}
int main(){
    vector<int>arr{10,40,90,80,70,60,50,30,20};
    int n = arr.size();
    int ansIndex = -1;
    //int index = Peak_index(arr,n);
    int index = Peak_index1(arr,n,ansIndex);
    cout<<"Index = "<<index;
    return 0;
} 