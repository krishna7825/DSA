#include<iostream>
#include<queue>
// FIFO -> First in First Out
using namespace std;
int main(){
    queue<int>first;
    queue<int>second;


    first.push(10);
    first.push(20);

    second.push(100);
    second.push(200);

    first.swap(second);

    cout<<first.front()<<" "<<first.back()<<endl;
    cout<<first.size()<<endl;

    cout<<second.front()<<" "<<second.back()<<endl;







    // //creation
    // queue<int>q;

    // //insertion
    // q.push(10);
    // //10
    // q.push(20);
    // //10->20
    // q.push(30);
    // //10->20->30
    // q.push(40);
    // //10->20->30->40

    // cout<<q.size()<<endl;

    // //q.pop();
    // //20->30->40
    // // inside queue pop will perform from front 

    // cout<<q.size()<<endl;

    // if(q.empty() == true){
    //     cout<<"Queue is empty"<<endl;
    // }
    // else{
    //     cout<<"Queue is not empty"<<endl;
    // }

    // cout<<q.front()<<endl;
    //  cout<<q.back()<<endl;
   






    return 0;
}