#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int main(){
    
    vector<int>arr(6);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;

    // 2 auto it = lower_bound(arr.begin(),arr.end(),41);
    // cout<<*it<<endl;

    // 3 auto it = upper_bound(arr.begin(),arr.end(),41);
    // cout<<*it<<endl;

    // 1 int target = 400;
    // bool it = binary_search(arr.begin(),arr.end(),target);
    // cout<<it<<endl;

    return 0;

}