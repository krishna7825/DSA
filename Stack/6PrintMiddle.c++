#include <iostream>
#include <stack>
#include <string>
using namespace std;
int printmiddle( stack<int>&s,int count){
        // base case
        
        if (count ==0){
            cout<<s.top()<<endl;
        }
       
        // 1 case hum krenge and baaki recursion karega
        int topElement = s.top();
        s.pop();
        count--;
    
        // baaki recursion
        printmiddle(s,count);
    
        // backtrack
        s.push(topElement);
    
 }
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60 );
    int count = s.size()/2;


     int ans = printmiddle(s,count);
     cout<<ans;

    


    return 0;
}