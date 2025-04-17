#include<iostream>
using namespace std ;
int sq(int &n){
    int square;
    square =n*n;

    return square;

}
int main(){
    int n,square;
    cout<<"Enter the number =";
    cin>>n;
     square = sq(n);
    cout<<"square = "<<square;


    return 0;
}