#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarysearch(vector<int>arr, int size,int target){
    int start =0;
    int end =size -1;
    int ans = -1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            ans= mid;
            /*last  occurence me hum left  ki tarf move karte hai aur kyuki ye asending order me
            hai to left me last occurence present hogi */ 
            start = mid +1;
        }
        else if(arr[mid]<target){
            start = mid +1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int main(){
    vector<int>arr{1,2,3,4,5,5,5,6,6,6,7,7,7,8,8};
    int target = 5;
    int size = arr.size();
    int lastOccurence = binarysearch(arr,size,target);
    if(lastOccurence == -1){
        cout<<"Not found";
    }
    else{
        cout<<"index = "<<lastOccurence<<endl;
    }
    return 0;
    }