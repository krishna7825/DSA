#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> arr{2,0,2,1,1,0};
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}