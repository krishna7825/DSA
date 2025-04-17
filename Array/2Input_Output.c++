#include<iostream>
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    cout<<"Enter the array"<<endl;
    for(int i =0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    cout<<sizeof(arr);
    return 0;
}