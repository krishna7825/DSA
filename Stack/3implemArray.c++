// Implementation of 2 stack using array
#include<iostream>
#include<stack>
using namespace std;
class Stack{
   public:
    int* arr;
    int size;
    int top1;
    int top2;


    Stack(int capacity) {
        arr = new int[capacity];
        size = capacity;
        top1 = -1;
        top2 = size;
    }
          void push1(int val){
              if(top2-top1 ==1){
                // stack is already full, agar insert karoge , toh stack overflow hojayega
                cout<<"Stack Overflow"<<endl;
              }
              else{
                top1++;
               arr[top1]= val;
              }
              
          }
          void push2(int val){
              if(top2-top1 ==1){
                // stack is already full, agar insert karoge , toh stack overflow hojayega
                cout<<"Stack Overflow"<<endl;
              }
              else{
                top2--;
               arr[top2]= val;
              }
              
          }
          void pop1(){
            // if stack is empty then its condition of underflow condition
            if(top1 == -1){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                arr[top1] = -1;
                top1--;
            }
          }
          void pop2(){
            // if stack is empty then its condition of underflow condition
            if(top2 == size){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                arr[top2] = -1;
                top2++;
            }
          }
          int  getsize(){
              return top2 + 1;
          }
        void print(){
            cout<<" Top1: "<<top1<<endl;
            cout<<" Top2: "<<top2<<endl;
            for(int i =0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<< endl;
        }
        

};
int main() {
    Stack s(5);  // Create a stack of size 5
    s.print();   // Print initial empty stack
    s.push1(10);
    s.print();
    s.push2(100);
    s.print();
    s.push1(20);
    s.print();
    s.push2(200);
    s.print();
    s.push1(30);
    s.print();

    return 0;
}