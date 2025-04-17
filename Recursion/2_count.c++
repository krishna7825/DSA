#include<iostream>
using namespace std;
int print(int n){
    // Base Case
    if(n ==0){
        return 0;
    }
    // Recursive call
    int c = print(n-1);
    // procesing 
    cout<< 2 *n<<" ";
}
int main(){
    int n ;
    cout<<"Enter the value of n :";
    cin>>n;

    print(n);
   return 0;
}