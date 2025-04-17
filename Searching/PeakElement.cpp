#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int arr[],int size){
    int start = 0;
    int end = size -1;
     int mid = (start + end)/2;
    while(start<end){
            if(arr[mid]>arr[mid+1]){
                return mid;
            }
            if(arr[mid]<arr[mid+1]){
                  start = mid +1;
            }
            else{
                end = mid;
            }
            mid = (start + end)/2;
        }
        return start;
}
int binarysearch1(int arr[],int size){
     int s =0;
        int e = size -1;
        int index = -1;
        int mid = s + (e-s)/2;
          while(s<=e){
            if(arr[mid]<arr[mid+1]){
                  s = mid +1;
            }
            else{
                index = mid;
                e = mid -1;
            }
            mid = s + (e-s)/2;
        }
        return index;
}

int main(){
    int arr[]={0,10,5,2};
    int size = 4;
    int peak = binarysearch1(arr,size);
     cout<<peak;
    return 0;
}