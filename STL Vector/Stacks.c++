#include<iostream>
#include<stack>
//LIFO
using namespace std;
int main(){
    stack<int>first;
    stack<int>second;


    first.push(10);
    first.push(20);

    second.push(100);
    second.push(200);

    first.swap(second);

    cout<<first.top()<<endl;
    cout<<first.size()<<endl;

    cout<<second.top()<<endl;





    // //Creation
    // stack<int>s;

    // //Insertion
    // s.push(10);
    // //10
    // s.push(20);
    // //10,20
    // s.push(30);
    // //10,20,30
    // s.push(40);
    // //10,20,30,40
    // s.push(50);
    // //10,20,30,40,50

    // cout<<s.size()<<endl;

    // //s.pop();
    // //10,20,30,40

    // cout<<s.size()<<endl;

    //  if(s.empty() == true){
    //     cout<<"stack is empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty"<<endl;
    // }

    // cout<<s.top()<<endl;;




    return 0;
}