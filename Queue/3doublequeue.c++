#include<iostream>
#include<queue>
using namespace std ;
class Deque{
    public:
    int *arr;
    int n;
    int front;
    int rear;
    public:
    Deque(int size){
        arr = new int [size];
        this-> n = size;
        front = -1;
        rear = -1;

    }
    void pushfront(int val){
        if(front == 0){
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
         front++;
         arr[front] = val;
        }
     }
    void pushback(int val){
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
    void popfront(){
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
    void popback (){
        if(front == -1 && rear == -1){
            cout<<" Underflow"<<endl;
        }
        else if(front == rear){
            // single element 
            front = -1;
            rear = -1;
        }
        else{
            // normal case 
            arr[rear]=-1;
            rear++;
        }    
    }
    void print(){
        for(int i =0;i<n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
     
};
int main(){
    Deque dq(5);
    dq.pushfront(10);
    dq.print();
    dq.pushfront(20);
    dq.print();
    dq.pushback(30);
    dq.print();
    dq.pushback(40);
    dq.print();
    dq.pushfront(200);
    dq.popback();
    dq.print();
    dq.popback();
    dq.print();  


    return 0;
}