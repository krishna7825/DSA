#include<iostream>
using namespace std;
// int  shift_Array(int arr[],int size ,int shift){
//     int finalShift = shift%size;
//     if(finalShift == 0){
//         return 0;
//     }
//     int temp [100];
//     int index = 0;
//     for(int i = size - finalShift;i<size;i++){
//         temp[index]=arr[i];
//         index++;
//     }
//     for(int i = size-1;i >=0;i--){
//         arr[i]=arr[i-finalShift];                               
//     }
//     for(int i =0;i<finalShift;i++){
//         arr[i]=temp[i];
//     }
// }

    int shift_Array(int arr[], int size,int k) {
        int temp;
       
        while(k>0){
            temp = arr[size];
            for(int i =0;i<size;i++){
                arr[i+1]=arr[i];
            }
            arr[0]=temp;
            k--;
        }  
        
    }

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int k = 4;
    cout<<"Before : "<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    shift_Array(arr,size,k);


    cout<<"After : "<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}