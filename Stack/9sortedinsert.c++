#include <iostream>
#include <stack>
using namespace std;
void sortedInsert( stack<int>&s,int value){
        // base case
        
        if (s.top()<value){
            s.push(value);
            return;
        }
       
        // 1 case hum krenge and baaki recursion karega
        int topE = s.top();
        s.pop();
    
        // baaki recursion
        sortedInsert(s,value);
    
        // backtrack
        s.push(topE);
 }
 void print(stack<int>&s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
 }
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60 );
    int value = 55;
    sortedInsert(s,value);
    print(s);

    


    return 0;
}