#include<iostream>
#include<vector>
using namespace std;
int Ceil(int arr[],int size,int target){
    int s = 0;
    int e = size -1;
    int mid = (s + e)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid]<target){
        s = mid +1;
        }
        else{
            ans = arr[mid];
            e = mid -1;
        }
        mid = (s + e)/2;
    } 
          return ans;
    }
int binaryAns(int arr[],int size,int target){
    sort(arr.begin(),arr.end());
    int s = 0;
    int e = size -1;
    int mid = (s + e)/2;
    int ans =-1;
    int sum = sum(arr,arr+size);
    int k = 1;
    while(k<=target){
        
        
    } 
          return ans;
    }
int main(){
    int arr[]={1,2,3,4,5};
    int target = 8;
    int size = 6;
    int binaryAns=Ceil( arr,size,target);
    cout<<"binaryAns = "<<binaryAns<<endl;
   
    
    return 0;
}