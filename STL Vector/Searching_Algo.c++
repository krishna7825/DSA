#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);


    //4
    int target = 30;
    auto it = equal_range(arr.begin(),arr.end(),target);
    cout<< it<<endl;

    // //// 3 always return the greater number
    // int target = 30;
    // auto it = upper_bound(arr.begin(),arr.end(),target);
    // cout<<*it<<endl;
    

    // // 2 give the biggert and equal  number then the target 
    // int target = 22;
    // auto it = lower_bound(arr.begin(),arr.end(),target);
    // cout<<*it<<endl;
    

    // //1
    // int target = 40;
    // bool it = binary_search(arr.begin(),arr.end(),target);
    // cout<<it<<endl;
    return 0;
}