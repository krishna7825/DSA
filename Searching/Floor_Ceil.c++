#include<iostream>
#include<vector>
using namespace std;
int Floor(int arr[],int size,int target){
    int s = 0;
    int e = size -1;
    int mid = (s + e)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid]<=target){
        ans = arr[mid];
        s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = (s + e)/2;
    } 
       return ans;
}
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
int main(){
    int arr[]={3, 4, 4, 7, 8, 10};
    int target = 7;
    int size = 6;
    int FloorAns = Floor( arr,size,target);
    int CeilAns=Ceil( arr,size,target);
    cout<<"FloorAns = "<<FloorAns<<endl;
    cout<<"CeilAns = "<<CeilAns<<endl;
   
    
    return 0;
}