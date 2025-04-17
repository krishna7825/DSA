// #include<iostream>
// #include<stack>
// #include<vector>
#include<algorithm>
// using namespace std;
// void nextSmallerElement( stack<int>&s,vector<int>v, vector<int>ans){
  
//    int n = v.size();
//    for(int i =n-1;i>=0;i--){
//     int element = v[i];

//     while(s.top()>=element){
//         s.pop();
//     }
//     ans.push_back(s.top());
//     s.push(element);
  
// }
// }
// int main(){
//    vector<int>v={7,5,4,10,3,11};
//    stack<int>s;
//    s.push(-1);
//    vector<int>ans;


//    nextSmallerElement(s,v,ans);
//    reverse(ans.begin(),ans.end());

//    for(auto i: ans){
//     cout<<i<<" ";
//    }
//     return 0;
// }
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void nextSmallerElement(stack<int>& s, vector<int>& v, vector<int>& ans) {
    int n = v.size();
    
    for (int i = n - 1; i >= 0; i--) { // Fix loop condition to include i = 0
        int element = v[i];

        while (!s.empty() && s.top() >= element) { // Fix to prevent stack underflow
            s.pop();
        }

        if (!s.empty()) {
            ans.push_back(s.top());
        } else {
            ans.push_back(-1); // If no smaller element exists
        }
        
        s.push(element);
    }
}

int main() {
    vector<int> v = {7, 5, 4, 10, 3, 11}; // Initialize vector directly
    stack<int> s;
    s.push(-1); // Initializing stack with -1

    vector<int> ans;

    nextSmallerElement(s, v, ans);

    reverse(ans.begin(), ans.end()); // Reverse because we collected in reverse order

    for (auto i : ans) {
        cout << i << " ";
    }

    return 0;
}
