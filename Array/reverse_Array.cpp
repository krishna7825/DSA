#include<iostream>
#include<algorithm>
using namespace std;
// Printing Array
void Print_Array(int arr[], int n){
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
}
// By For loops 
void Reverse_1(int arr[] ,int n){
    for(int i = 4 ;i>=0;i--){
        cout<<arr[i];
    }
}
// Using swap function
void Reverse_2(int arr[],int n){
    int i =0,j =n-1;
    while (i<j)
    {
    swap(arr[i++],arr[j--]);
    // i++;
    // j--; 
    }
    Print_Array( arr,n);
}


// Using Reverse function
// Add a lib od c++ which is algorithm
void Reverse_function_3(int arr [], int n){
    reverse(arr , arr+n);
    Print_Array( arr,n);

}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    //Reverse_1(arr,n);
    //Reverse_2(arr,n);
    Reverse_function_3(arr,n);
    
     return 0;
}