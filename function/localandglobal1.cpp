#include<iostream>
using namespace std ;
int p = 3;
int main(){
    int p = 6;
    cout<<p;//local>>global variable
    p++;
    cout<<p;
    cout<<::p;// printing global variable use (::)
    return 0;
}