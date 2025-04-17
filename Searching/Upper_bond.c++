#include<iostream>
#include<vector>
using namespace std;
int UpperBond(vector<int>arr,int target){
    int start = 0;
    int end = arr.size() -1;
     int mid = (start + end)/2;
     while(start<=end){
        if(arr[mid]==target){
            if(arr[mid +1]==target){
                return mid+2;
            }
            else{
                 return mid+1;
            }
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
    vector<int>arr={1,4, 7 ,7, 10};
    int target = 7;
    int ans = UpperBond(arr,target);
    cout<<"ans = "<<ans<<endl;
    
    return 0;
}