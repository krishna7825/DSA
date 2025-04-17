#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void  printdigit(int nums){
    // base case
    if (nums ==0){
        return ;
    }
    int newnumber = nums/10;
    cout<<"newnumber = "<<newnumber<<endl;
    // baaki recursion sambhal lega
    printdigit(newnumber);
    // recursive relation
    // ek case main solve karunga 
    int digit = nums %10;
    cout<<digit;
    
    
}

int main(){
   int  nums = 389;
   printdigit(nums);
   
   return 0;
}