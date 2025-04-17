#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std ;
int main(){
    vector<int>first(9);
    iota(first.begin(),first.end(),250);
    for(int a:first){
        cout<<a<<" ";
    }

    //  3  vector<int>first;
    // first.push_back(1);
    // first.push_back(2);
    // first.push_back(3);
    // first.push_back(4);
    // vector<int>result(first.size());
    // partial_sum(first.begin(),first.end(),result.begin());
    // for(int a:result){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    //  2  vector<int>second;
    // second.push_back(3);
    // second.push_back(4);
    // second.push_back(5);
    // int ans = inner_product(first.begin(),first.end(),second.begin(),100);
    // cout<<ans<<endl;



    // vector<int>arr(6);
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    // arr[5] = 60;




    // 1 use to sum all the element present in the vector and 0 is the starting values in this .
    // int ans =  accumulate(arr.begin(),arr.end(),0);
    // cout<<ans<<" ";
    

    

    return 0;
}