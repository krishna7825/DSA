#include<iostream>
using namespace std;
int
 pow(int n){
    // Base Case
    if(n ==0){
        return 1;
    }
    // Recursive call
    int ans = 2 *pow(n-1);
    cout<<"ans = "<<ans<<" ";
    return ans;
    // procesing 
}
int main(){
    int n ;
    cout<<"Enter the value of n :";
    cin>>n;

   int ans =  pow(n);
   cout<<"ans = "<<ans<<endl;
   return 0;
}