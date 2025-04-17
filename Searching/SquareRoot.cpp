#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int n){
    int start = 0;
    int end = n;
    int target = n;
     int mid = (start + end)/2;
     while(start<=end){
     int ans = mid*mid;
        if(ans==target){ 
            return mid;
        }
        if(target<ans){
            // left shift 
             cout<<"mid = "<<mid<<endl;
            end = mid -1;
           
        }
        else if(target>ans){
            // right shift
             cout<<"mid = "<<mid<<endl;
            start = mid + 1;  
             1
        }
        mid = (start + end)/2;
    }
    return mid;
}
int main(){
    int n ;
    cin>>n;
    int squareRoot = binarysearch(n);
   if(squareRoot == -1){
    cout<<"Not found";
   }
   else{
    cout<<"squareRoot = "<<squareRoot;
   }
    
    return 0;
}