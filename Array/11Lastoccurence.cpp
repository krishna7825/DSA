#include<iostream>
using namespace std ;
int main(){
    int arr[6]={3,5,6,2,6,2};
    int x = 6;
    int occ ;
    for(int i = 5;i>0;i--){
        if(x == arr[i]){
            occ=i;
            cout<<occ<<endl;
            break;
        }
    }
    return 0;
} 