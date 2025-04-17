#include<iostream>
using namespace std ;
int main(){
    int krishna []{1,2,3,4,5};
    int size =sizeof(krishna)/sizeof(krishna [0]);
     // for loop
    for(int idx=0;idx<size;idx++){
        cout<<krishna[idx]<<endl;
    }
    // for each loop
    for(int ele:krishna){
        cout<<ele<<endl;
    }
    // while
    int  idx =0;
    while(idx<size){
        cout<<krishna[idx]<<endl;
        idx++;
    }


    
    return 0;
}