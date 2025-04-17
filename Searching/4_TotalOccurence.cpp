#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Find_firstOcc(vector<int>arr,int n,int target){
    int s = 0;
    int e = n -1;
    int index = -1;
    int mid = s + (e-s)/2;
    while (s<=e){
        if(arr[mid]==target){
            index = mid;
            e = mid -1;
        }
        else if(arr[mid]<target){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return index;   
}
int Find_lastOcc(vector<int>arr,int n,int target){
    int s = 0;
    int e = n -1;
    int index = -1;
    int mid = s + (e-s)/2;
    while (s<=e){
        if(arr[mid]==target){
            index = mid;
            s = mid +1;
        }
        else if(arr[mid]<target){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return index;   
}
int main(){
    vector<int>arr{1,2,4,4,5};
    int n = arr.size();
    int target = 3;
    int firstOccurence = Find_firstOcc(arr,n,target);
    cout<<" firstOccurence ="<<firstOccurence<<endl;
    int lastOccurence = Find_lastOcc(arr,n,target);
    cout<<" lastOccurence ="<<lastOccurence<<endl;
    if(firstOccurence ==-1 && lastOccurence ==-1 ){
        cout<< lastOccurence +1<<endl;;
    }
    else{
        int Total_Occurence = (lastOccurence - firstOccurence)+1;
        cout<<" Total = "<<Total_Occurence;
    }
    


    return 0;
}