#include <iostream>
#include <stack>
#include<climits>
using namespace std;
bool CheckSorted(stack<int>&s,int element1){
        // base case
        if (s.empty()){
            return true;
        }
       
        // 1 case hum krenge and baaki recursion karega
        int element2 = s.top();
        s.pop();
        if(element1>element2){
            bool aagekaAns = CheckSorted(s,element1);
            return aagekaAns;
        }
        else{
            return false;
        }
 }
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    int element1 = INT_MAX;
    bool ans = CheckSorted(s,element1);
    cout<<ans;
    return 0;
}