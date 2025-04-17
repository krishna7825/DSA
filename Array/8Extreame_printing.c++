// print the element as in the order first index and last inde & then com ecloser to mid points 
// example 
// input -> 1 2 3 4 5 6
// output -> 1 6 2 5 3 4 
#include<iostream>
using namespace std ;
int main(){
    int size ;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    cout<<"Enter the Arrays"<<endl;
    for(int i =0;i<size;i++){
        cout<<"Enter the Array at index "<<i<<endl;
        cin>>arr[i];
    }
    
// First Approch for even size ;
    for(int i =0;i<6;i++){
        int size =5;
        for(int j =5;j>=0;j--){
            if(i+j==size){
                if(i<=j){
                    cout<<arr[i]<<" "<<arr[j]<<" ";
                }
            }
        }
    }


// // Second Approch;
//     int i =0;
//     int j = size -1;
//     while(i<=j){
//         if(i==j){
//             cout<<arr[i]<<" ";
//             i++;
//         }
//         else{
//         cout<<arr[i]<<" ";
//         i++;
//         cout<<arr[j]<<" ";
//         j--;
//         }
//     }

    
    return 0;
}