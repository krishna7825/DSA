#include<iostream>
#include<queue>
using namespace std ;
class Queue{
    public:
    int *arr;
    int n;
    int front;
    int rear;
    public:
    Queue(int size){
        arr = new int [size];
        n = size;
        front = -1;
        rear = -1;

    }
    void push(int val){
       if(rear == n -1){
        cout<<"Overflow"<<endl;
       }
       else if(front == -1 && rear == -1){
        // insert first element
        rear++;
        front++;
        arr[rear]=val;
       }
       else{
        // normal flow
        rear++;
        arr[rear] = val;
       }
    }
    void pop(){
        if(front == -1 && rear == -1){
            cout<<" Underflow"<<endl;
        }
        else if(front == rear){
            // single element 
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            // normal case 
            arr[front]=-1;
            front++;
        }
    }
    int getsize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        else{
            return rear-front +1;
        }
    }
    int getfront(){
        if(front == -1){
            cout<<"Queue is empty";
        }
        else{
            return arr[front];
        }
    }
    void getrear(){
        // if(rear == -1){
        //     cout<<"Queue is empty";
        // }
        // else{
        //     return arr[rear];
        // }
    }
    bool getempty(){
        if(front == -1 && rear == -1){
            return true ;
        }
        else{
            return false;
        }
    }
     
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<< q.getsize()<<endl;
    q.push(50);
    cout<<q.getfront()<<endl;
    cout<<q.getempty()<<endl;
    q.pop();
    cout<< q.getsize()<<endl;
    q.pop();
    cout<< q.getsize()<<endl;
    q.pop();
    cout<< q.getsize()<<endl;
    q.pop();
    cout<< q.getsize()<<endl;
    q.pop();
    cout<< q.getsize()<<endl;
    q.pop();



    return 0;
}