#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int arr[],int size,int target){
    int s = 0;
    int e = size -1;
     int mid = (s + e)/2;
     while(s<=e){
        if(arr[mid]== target ){
            return mid;
        }
        else if(arr[mid]>target){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target;
    cout<<"enter the target :";
    cin>>target;
    int size = 9;
    int indexoftarget = binarysearch( arr,size,target);
    cout<<"show the result :";
     if(indexoftarget == -1){
        cout<<"Not found";
     }
    else{
     cout<<"index = "<<indexoftarget;
     }
    return 0;
}