#include<iostream>
using namespace std;
bool  SearchInArray(int arr[],int size,int index,int target){
    // base case
    if (index == size){
        return false;
    }
    // recursive relation
    // ek case main solve karunga 
    if (target == arr[index]){
       return true;
    }
    // baaki recursion sambhal lega
    bool ans = SearchInArray(arr,size,index+1,target);
    return ans;
}
int main(){
   int arr[]={10,20,30,40,50,60};
   int size = 6;
   int index = 0;
   int target = 440;
   cout<<SearchInArray(arr,size,index,target);
   return 0;
}