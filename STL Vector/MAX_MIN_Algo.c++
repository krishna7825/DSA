#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // max and min in range
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    auto it = min_element(arr.begin(),arr.end());
    auto it1 = max_element(arr.begin(),arr.end());
    cout<<*it<<endl;
    cout<<*it1<<endl;

    



    //1
    // int a = 10;
    // int b = 20;
    // cout<<max(a,b)<<endl;
    // cout<<min(a,b)<<endl;

    return 0;


}

