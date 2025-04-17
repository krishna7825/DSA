#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main (){

    //4
    vector<int>arr(5);
    iota(arr.begin(),arr.end(),250);
    for(int a :arr){
        cout<<a<<" ";
    }
    // vector<int>arr(5);
    // arr[0]=10;
    // arr[1]=20;
    // arr[2]=30;
    // arr[3]=40;
    // arr[4]=50;


    
    

//    // 3
//     vector<int>result(arr.size());
//     partial_sum(arr.begin(),arr.end(),result.begin());
//    for(int a :result){
//     cout<<a<<" ";
//    }
//    cout<<endl;

    //  //  2
    //  vector<int>brr(5);
    // brr[0]=10;
    // brr[1]=20;
    // brr[2]=30;
    // brr[3]=40;
    // brr[4]=50;

    // //2
    // int ans = inner_product(arr.begin(),arr.end(),brr.begin(),0);
    // cout<<ans<<" ";
    
     
    // // 1
    // int total_sum = accumulate(arr.begin(),arr.end(),100);
    //  cout<<total_sum<<"";
    return 0;
}
