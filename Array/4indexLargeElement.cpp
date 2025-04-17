#include<iostream>
using namespace std ;
int main(){
    // index of largest element
    int arr[5];
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    int x ;
    cin>>x;
    int parti = 0;
    for(int i = 0;i<5;i++){
        if( arr[i]>x){
            parti++;
        }
    }
    cout<<parti;
    return 0;
}