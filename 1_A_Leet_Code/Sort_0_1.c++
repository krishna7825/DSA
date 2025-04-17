#include<iostream>
#include<algorithm>
using namespace std;
// Printing Array
void Print_Array(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }

}
void Sort_function(int arr[] ,int n){
    sort(arr,arr + 8);
    Print_Array(arr,n);

    
}
void Counting(int arr[],int n){
    int count_0 = 0;
    int x = 0;
    int count_1 = 0;
    for(int i =0;i<n;i++){
        if(x == arr[i]){
            count_0++;
        }
        else{
            count_1++;
        }
    }
// Frist approch
    // for(int i =0;i<4;i++){
    //     cin>>arr[i];
    // }
    //  for(int i =4;i<8;i++){
    //     cin>>arr[i]; 
    // }

// Second approch
fill(arr,arr + count_0,0);
fill(arr + count_0,arr +n,1);
    Print_Array(arr,n);
    
    cout<<endl;
    cout<<"No. of 0 => "<<count_0<<endl;
    cout<<"No. of  1=> "<<count_1<<endl;

}
int main(){
    int arr[]={0,1,0,1,0,1,0,1};
   int n = sizeof(arr) / sizeof(arr[0]);
    // Sort_function(arr,n);
    Counting(arr,n);

   
    return 0;
}