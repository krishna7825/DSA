#include<iostream>
using namespace std;
// Functional Overloading
class Add{
public:
       // sum of two number 
       int sum (int a ,int b){
        cout<<"Sum of 2 integers "<<endl;
        return a+b;
       };
       // sum 0f 3 number 
       int sum (int a,int b,int c){
        cout<<"Sum of 3 integers "<<endl;
        return a+b+c;
       };
       // different data type
       double sum(double a ,double b){
        cout<<"Sum of 2 double "<<endl;
        return a+b;
       };
};


int main(){
    
    /*
    Functional overloading 
    int a = 5,b= 7;
    int c = 2;
    Add add;
    cout<<add.sum(a,b)<<endl;
    cout<<add.sum(a,b,c)<<endl;
    cout<<add.sum(5.4,3.8)<<endl;
    */

    return 0;
}
