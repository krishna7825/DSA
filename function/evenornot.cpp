#include<iostream>
using namespace std ;
int check(int x){
    int c ;
    c = (x % 2==0);
    return c;
}
int main(){
    int n,evenodd;
    cin>>n;
     
     if(check(n)){
        cout<<"even";
     }
     else {
        cout<<"odd";
     }


    return 0;
}