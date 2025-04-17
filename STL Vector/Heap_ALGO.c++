#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // max and min in range
    vector<int>arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);


    // Use this to make the heap
    // T.C = o(n)
    // make_heap(arr.begin(),arr.end());
    // for(int a :arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // //insertion
    // T.C = o(logn)
    arr.push_back(99);
    // 77 66 55 22 11 99 
    // output will different it will violet the rule the heap
    // for the rule follofication then use the push_heap
    push_heap(arr.begin(),arr.end());
    for(int a :arr){
        cout<<a<<" ";
    }
    cout<<endl;


    // // deletion 
    // T.C = o(1)
    // pop_heap(arr.begin(),arr.end());
    // arr.pop_back();
    // for(int a :arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // Sorting 
    //// T.C = o(n)
    // sort_heap(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    return 0;


}

