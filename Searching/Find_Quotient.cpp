#include<iostream>
using namespace std;
int find_Quotient(int divisor,int dividend){
    int s = 0;
    int e = dividend;
    int mid = s + ((e-s)>>1);
    int ans = -1;
    while(s<=e){
        if((divisor * mid) == dividend){
            return mid;
        }
        if((divisor * mid) < dividend){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s + ((e-s)>>1);
    }
    return ans;
}
int main(){
    int divisor = 4;
    int dividend = -50;
    int answer = find_Quotient(abs(divisor),abs(dividend));
    if((dividend >0 && divisor <0) || (dividend < 0 && divisor >0) ){
        answer = 0-answer;
    }
    cout<<"Answer = "<<answer;
    
    return 0;
}