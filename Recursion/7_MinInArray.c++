#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void  MinInArray(int arr[],int size,int index,int &mini){
    
    // base case
    if (index == size){
        return ;
    }
    
    // recursive relation
    // ek case main solve karunga 
    mini = min(mini,arr[index]);
    
    
    // baaki recursion sambhal lega
    MinInArray(arr,size,index+1,mini);
    
}
int main(){
   int arr[]={10,20,30,40,50,60};
   int size = 6;
   int index = 0;
   int mini  = INT_MAX;
   MinInArray(arr,size,index,mini);
   cout<<"Min No-> "<<mini<<endl;
   return 0;
}