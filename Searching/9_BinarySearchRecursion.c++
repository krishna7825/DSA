#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int arr[],int size,int s,int e ,int target){
    // base condition
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;
    // 1 case main
    if(arr[mid]==target){
        return mid;
    }
    // baki recursion sambhal lega
    if(target>arr[mid]){
        return binarysearch( arr,size,mid+1,e,target);
    }
    else{
        return binarysearch( arr,size,s,mid-1,target);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target = 7;
    int size = 9;
    int s =0;
    int e = size-1;
    int ans = binarysearch( arr,size,s,e,target);
    cout<<ans;

    return 0;
}