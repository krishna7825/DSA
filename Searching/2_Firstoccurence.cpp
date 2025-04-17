#include<iostream>
#include<vector>
using namespace std;
int first_occurence(vector<int>arr,int n, int target,int index){
    int s = 0;
    int e = n-1;
    int mid = s + ((e- s)/2);
    while(s<=e){
        if(arr[mid] == target){
            index = mid;
            e = mid -1;
            
        }
        else if(arr[mid]>target){
            e = mid -1;
        }
        else{
            s = mid +1;
        }
        mid = s + ((e - s)/2);
    }
    return index;
}
int main(){
    vector<int>arr{1,1,1,2,2,3,3,4,5,5,5};
    int n = arr.size();
    int target = 1;
    int index = -1;
    int ind = first_occurence(arr,n,target,index);
    cout<<"First_Index = "<<ind;
    return 0;
}