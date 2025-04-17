#include<iostream>
using namespace std ;
int main(){
    int arr[6];
    cout<<"Enter the Arrays"<<endl;
    for(int i =0;i<6;i++){
        cout<<"Enter the Array at index "<<i<<endl;
        cin>>arr[i];
    }
    int x ;
    cout<<"Enter the number :";
    cin>>x;
    int count_0 = 0;
    for(int i =0;i<6;i++){
        if(x == arr[i]){
            count_0++;
        }
    }
    cout<<"Number of 0`s = "<<count_0;
    
    return 0;
}