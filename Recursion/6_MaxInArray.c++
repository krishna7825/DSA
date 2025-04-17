#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void  MaxInArray(int arr[],int size,int index,int &maxi){
    
    // base case
    if (index == size){
        return ;
    }
    
    // recursive relation
    // ek case main solve karunga 
    maxi = max(maxi,arr[index]);
    
    
    // baaki recursion sambhal lega
    MaxInArray(arr,size,index+1,maxi);
    
}
void MaxInArray1(int arr[],int size,int index,int &maxi){
    // base case
    if(index == size){
        return;
    }
    if(arr[index] >maxi){
        maxi = arr[index];
    }
    MaxInArray1(arr,size,index+1,maxi);
    
}
int main(){
   int arr[]={10,20,30,40,50,60};
   int size = 6;
   int index = 0;
   int maxi  = INT_MIN;
   MaxInArray1(arr,size,index,maxi);
   cout<<"Maxi No-> "<<maxi<<endl;
   return 0;
}