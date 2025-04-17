#include<iostream>
using namespace std;
void solve(int arr[],int size){
    arr[1]=22;
}
int main(){
    int arr[]={10,20,30,40};
    int size = 4;
    solve(arr,size);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}