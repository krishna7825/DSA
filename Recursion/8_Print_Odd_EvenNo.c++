#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void  printOdd(int arr[],int size,int index){
    // base case
    if (index == size){
        return ;
    }
    // recursive relation
    // ek case main solve karunga 
    if(arr[index]%2==1){
        cout<<arr[index]<<" ";
    }    
    // baaki recursion sambhal lega
    printOdd(arr,size,index+1);
    
}
void  printEven(int arr[],int size,int index){
    // base case
    if (index == size){
        return ;
    }
    // recursive relation
    // ek case main solve karunga 
    if(arr[index]%2==0){
        cout<<arr[index]<<" ";
    }    
    // baaki recursion sambhal lega
    printEven(arr,size,index+1);
    
}
int main(){
   int arr[]={10,11,30,13,50,15};
   int size = 6;
   int index = 0;
   printOdd(arr,size,index);
   printEven(arr,size,index);
   return 0;
}