// Implementation of stack using array
//using only one stack
#include<iostream>
#include<stack>
using namespace std;
class Stack{
   public:
    int* arr;
    int size;
    int top;


    Stack(int capacity) {
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }
          void push(int val){
              if(top == size-1){
                // stack is already full, agar insert karoge , toh stack overflow hojayega
                cout<<"Stack Overflow"<<endl;
              }
              else{
                top++;
               arr[top]= val;
              }
              
          }
          void pop(){
            // if stack is empty then its condition of underflow condition
            if(top == -1){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                arr[top] = -1;
                top--;
            }
          }
          int  getsize(){
              return top + 1;
          }
          bool isEmpty(){
                 if(top == -1){
                return true;
              }
              else{
                return false;
              }
          }
          int getTop(){
              if(top == -1){
                cout<<"There is no element at top as stack"<<endl;
                return -1;
              }
              else{
                // normal case
                return arr[top];
              }
          }
        void print(){
            cout<<"printing stack"<<endl;
            for(int i =0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<< endl;
        }
        

};
int main() {
    Stack s(5);  // Create a stack of size 5
    s.print();   // Print initial empty stack
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);
    s.print();  
    s.push(50);
    s.print();
    s.push(60);
    s.print();
    cout<<s.getTop()<<endl;
    cout<<s.getsize()<<endl;
    cout<<s.isEmpty()<<endl;
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    cout<<s.getsize()<<endl;
    return 0;
}