#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    // min - heap -> MInimum value has high priority
    priority_queue<int,vector<int>,greater<int>>pq;


    // creation 
    pq.push(100);
    //100
    pq.push(50);
    //50,100
    pq.push(10);
    //10,50,100

    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;







    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // priority_queue<int>first;
    // priority_queue<int>second;


    // first.push(10);
    // first.push(20);

    // second.push(100);
    // second.push(200);

    // first.swap(second);

    // cout<<first.top()<<endl;
    // cout<<first.size()<<endl;

    // cout<<second.top()<<endl;







    // //creation
    // priority_queue<int>q;

    // //insertion
    // q.push(10);
    // //10
    // q.push(20);
    // //20->10
    // q.push(30);
    // //30->20->10
    // q.push(40);
    // //40->30->20->10

    // cout<<q.size()<<endl;
    // // hightest priority ka mtlb hai ki value me sabse jayda jisiki hai vo print hoga 
    // cout<<q.top()<<endl;

    // q.pop();
    // // hightest priority element -> pop
    // // i.e 40 ko pop karga 
    // // 30,20,10
    // cout<<q.top()<<endl;
    // cout<<q.size()<<endl;
    
    
    // if(q.empty() == true){
    //     cout<<"priority_queue is empty"<<endl;
    // }
    // else{
    //     cout<<"priority_queue is not empty"<<endl;
    // }

 
   






    return 0;
}