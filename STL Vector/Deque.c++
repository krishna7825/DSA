#include<iostream>
#include<queue>
//Deque -> Double - ended queue
// insertion and removal allows  at both ends and front and rear
using namespace std;
int main(){
    deque<int>first;
    deque<int>second;


    first.push_back(10);
    first.push_back(20);

    second.push_back(100);
    second.push_back(200);

    first.swap(second);

    cout<<first.begin()<<" "<<first.end()<<endl;
    cout<<first.size()<<endl;

    cout<<second.begin()<<" "<<second.end()<<endl;







    //creation
    // deque<int>q;

    // //insertion
    // q.push_back(10);
    // //10
    // q.push_back(20);
    // //10->20
    // q.push_back(30);
    // //10->20->30
    // q.push_back(40);
    // //10->20->30->40

    // q.push_front(100);
    // //100,10,20,30,40

    // q.push_front(200);
    //200,100,10,20,30,40

    //clear is use to remove all the element in dequeue
    //q.clear();

    // Erase is also use to remobve the element in dequeue
    // q.erase(q.begin(),q.end());
    // cout<<q.size()<<endl;


    // Access by idexsing 
    // cout<<q[5]<<endl;
    // cout<<q.at(2)<<endl;


    // // Iterator which help to ietrate the whole dequeue
    // deque<int>::iterator it = q.begin();
    // while(it != q.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

    // q.pop_back();
    // //20->30->40
    // // inside queue pop will perform from front 

    // cout<<q.size()<<endl;

    // if(q.empty() == true){
    //     cout<<"DEQueue is empty"<<endl;
    // }
    // else{
    //     cout<<"De Queue is not empty"<<endl;
    // }

    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
   






    return 0;
}