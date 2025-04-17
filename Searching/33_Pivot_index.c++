#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Method 1
int Linear_search(vector<int>arr,int n ){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
           return i;
        }
    }
    return -1;
}
// Method 2 
int pivot (vector<int>arr,int n){
    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(arr[mid + 1]<arr[mid]){
            return mid;
        }
        if(arr[mid]<arr[mid-1]){
            return mid -1;
        }
        if(arr[mid]<arr[s]){
            e = mid -1;
        }
        else
        {
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}



int main(){
    vector<int>arr{40,50,60,70,10,20,80 };
    int n = arr.size();
    int linear = pivot(arr,n);
    cout<<" Index "<<linear;
    return 0;
}