#include<iostream>
using namespace std;
int main(){
    int arr[4];
    fill(arr,arr+4,23);
    for(int i =0;i<4;i++){
        cout<<arr[0]<<" ";
    }
    return 0;
}