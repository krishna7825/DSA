#include<iostream>
using namespace std;
int getfactorial(int n){
    // Base Case
    if(n ==0){
        return 1;
    }
    // Recursive call
    int finalAns = n * getfactorial(n-1);
    return finalAns;
    // procesing 
}
int main(){
    int n ;
    cout<<"Enter the value of n :";
    cin>>n;

    int ans = getfactorial(n);
    cout<<"Factorial of "<<n << " is = "<<ans<<endl;

   return 0;
}