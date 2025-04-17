#include<iostream>
#include<vector>
using namespace std;
 int factorial(int N){
        // code 
        vector<int>ans;
        ans.push_back(1);
        int carry =0;
        for(int i =2;i<=N;i++){
            for(int j =0;j<ans.size();j++){
                int x = ans[j]*i+carry;
                ans[j] = x %10;
                carry = x/10;
            }
            while(carry){
                ans.push_back(carry %10);
                carry /=10;
            }
            carry = 0;
        }
        reverse(ans.begin(),ans.end());
        return ans;
 }
int main(){
    int n =10;
    int answer = factorial(n);
    cout<<"ans = " <<answer<<endl;
    return 0;
}