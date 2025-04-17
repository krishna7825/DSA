#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int main(){
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    
    make_heap(arr.begin(),arr.end());
    
    
    //  1 it will convert into a max heap values 
    // for(int a : arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // 2 insertion
    // in this always push heap walaa function chalana hi padega varna galt answer dega 
    // arr.push_back(99);
    // push_heap(arr.begin(),arr.end());
    //   for(int a : arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // 3deletition 
    //  for(int a : arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;
    // pop_heap(arr.begin(),arr.end());
    // arr.pop_back();
    // for(int a : arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // 4 sort_heap
    sort_heap(arr.begin(),arr.end());
    for(int a :arr){
        cout<<a <<" ";
    }
    cout<<endl;


    

     
    return 0;
}