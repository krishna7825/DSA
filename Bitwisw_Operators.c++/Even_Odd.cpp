#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int result = n & 1;
    if(result==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}