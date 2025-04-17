#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int divided,int divisor){
    int start = 0;
    int end =  abs(divided);
     int mid = (start + end)/2;
     int ans =0;
     while(start<=end){
        if(abs(mid*divisor)==abs(divided)){
            ans = mid;
            break;
        }
        
        if(abs(mid*divisor)>abs(divided)){
            // left shift 
            end = mid -1;
        }
        else{
            ans = mid;
            // right shift
            start = mid + 1;   
        }
        mid = (start + end)/2;
    }
        if(divisor<0 && divided<0 || divided>0 &&  divisor>0){
            return ans;
        }
        else {
            return -ans;
        }
    return ans ;
}
int main(){
    int divided = -22 ;
    int divisor = 7;
    int ans = binarysearch( divided,divisor);
    cout<<"Ans is = "<<ans;
     
    return 0;
}