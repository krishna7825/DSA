#include<iostream>
using namespace std ;
void swap(int x,int y){
    int t ;
    t = x;
    x = y;
    y = t;
    cout<<x<<y;
}
int main(){
    int m,n;
    cout<<"enter the number = ";
    
    cin>>m>>n;
     swap(m,n);
   

    return 0;
}