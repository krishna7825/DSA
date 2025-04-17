#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printDouble(int a){
    cout<<2*a<<" ";
}
bool checkEven(int a){
    return a%2 ==0;
}
int main (){
    vector<int>arr(5);
    arr[0] =10;
    arr[1] =11;
    arr[2] =12;
    arr[3] =13;
    arr[4] =14;

    // 10 arr = 10,11,12,13,14
    auto it = partition(arr.begin(),arr.end(),checkEven);
     for(int a :arr){
        cout<<a<<" ";
    }


    // //9 arr = 11,11,11,22,22,23 output -> 11,22,33
    // auto it = unique(arr.begin(),arr.end());
    // arr.erase(it,arr.end());
    // for(int a :arr){
    //     cout<<a<<" ";
    // }

    // 8
    // rotate(arr.begin(),arr.begin()+3,arr.end());
    //  for(int a :arr){
    //     cout<<a<<" ";
    // }

    // //7
    // reverse(arr.begin(),arr.end());
    //  for(int a :arr){
    //     cout<<a<<" ";
    // }



    // // 6
    // sort(arr.begin(),arr.end());
    // for(int a :arr){
    //     cout<<a<<" ";
    // }

    // //5 
    // int ans = count(arr.begin(),arr.end(),checkEven);
    // cout<<ans<<endl;


    // //4 
    // int target = 20;
    // int ans = count(arr.begin(),arr.end(),target);
    // cout<<ans<<endl;




    // //3
    // auto it = find_if(arr.begin(),arr.end(),checkEven);
    //  cout<<*it<<endl;


    // 1 algo
    // for_each(arr.begin(),arr.end(),printDouble);

    // 2 algo
    // int target = 400;
    // auto it = find(arr.begin(),arr.end(),target);
    // cout<< *it<<endl;

    //3
    

    return 0;
}
