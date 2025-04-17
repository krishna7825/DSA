#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int arr[],int size,int target){
    int start = 0;
    int end = size -1;
     int mid = (start + end)/2;
     while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if( mid + 1 >= start && arr[mid -1]<target){
            return mid -1;
        }
        else if( mid + 1 < size && arr[mid + 1]<target){
            return mid + 1;
        }
        if(target<arr[mid]){
            // left shift 
            end = mid -1;
        }
        else{
            // right shift
            start = mid + 1;   
        }
        mid = (start + end)/2;
    }
    return -1;
}
int main(){
    int arr[]={10,3,40,20,50,80,70};
    int target = 40 ;
    int size = sizeof(arr)/sizeof(arr[0]);
    int indexoftarget = binarysearch( arr,size,target);
     if(indexoftarget == -1){
        cout<<"Not found";
     }
    else{
     cout<<"index = "<<indexoftarget;
     }
    return 0;
}