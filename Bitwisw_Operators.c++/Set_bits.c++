#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"Enter the number : ";
    cin>>n;
    int setBits = 0;
    while(n !=0){
        int lastBit = (n&1);
        if(lastBit ==1){
            setBits=setBits + 1;
        }
        n = n>>1;
    }
    cout<<"Total set bits :"<<setBits<<endl;
   
    return 0;
}