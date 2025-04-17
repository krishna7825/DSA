#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int a){
    cout<<2*a<<" ";
}
bool checkEven(int a ){
    return a%2 == 0;
}
 
int main(){
    vector<int>arr(6);
    arr[0] = 11;
    arr[1] = 50;
    arr[2] = 11;
    arr[3] = 408;
    arr[4] = 5;
    arr[5] = 60;

    auto it = partition(arr.begin(),arr.end(),checkEven);
     for(int a :arr){
        cout<<a <<" ";
    }

    //  9 sort(arr.begin(),arr.end());
    //  auto it = unique(arr.begin(),arr.end());
    //  arr.erase(it,arr.end());
    //  for(int a :arr){
    //     cout<<a <<" ";
    // }


    // 8 rotate(arr.begin(),arr.begin()+3,arr.end());
    // for(int a :arr){
    //     cout<<a <<" ";
    // }

     
    // 7 for(int a :arr){
    //     cout<<a <<" ";
    // }
    // cout<<endl;
    // reverse(arr.begin(),arr.end());
    // for(int a :arr){
    //     cout<<a <<" ";
    // }
    //  cout<<endl;


    // 6 sort(arr.begin(),arr.end());
    // for(int a :arr){
    //     cout<<a <<" ";
    // }


    //  5  int  ans = count_if(arr.begin(),arr.end(),checkEven);
    // cout<<ans<<endl;


    //  4 int target = 10;
    // int  ans = count(arr.begin(),arr.end(),target);
    // cout<<ans<<endl;
    




    //  3  auto it = find_if(arr.begin(),arr.end(),checkEven);
    // cout<<*it<<endl;

    // 1  for_each(arr.begin(),arr.end(),printDouble);
    
    
    // 2  int target = 500;
    // auto it = find(arr.begin(),arr.end(),target);
    // cout<<*it<<endl;

    return 0;
}