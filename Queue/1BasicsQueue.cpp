#include<iostream>
#include<queue>
using namespace std ;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    //front 
    cout<<q.front()<<endl;
    // removal
    q.pop();
    cout<<q.front()<<endl;

    // size
    cout<<q.size()<<endl;

    // empty
    cout<<q.empty()<<endl;

    // back
    cout<<q.back()<<endl;

    return 0;
}