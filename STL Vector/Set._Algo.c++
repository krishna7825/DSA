#include<iostream>
#include<algorithm>
#include<vector>
 using namespace std;
 int main (){

    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);


     vector<int> sec;
    sec.push_back(5);
    sec.push_back(6);
    sec.push_back(7);
    sec.push_back(8);

    vector<int>result;

    // Set symmetric diffrence 
    set_symmetric_difference(first.begin(),first.end(),sec.begin(),sec.end(),inserter(result,result.begin()));
     for(int a:result){
        cout<<a<<" ";
     }

    // // set Diffrence
    // set_difference(first.begin(),first.end(),sec.begin(),sec.end(),inserter(result,result.begin()));
    //  for(int a:result){
    //     cout<<a<<" ";
    //  }

    // // intersection
    // set_intersection(first.begin(),first.end(),sec.begin(),sec.end(),inserter(result,result.begin()));
    //  for(int a:result){
    //     cout<<a<<" ";
    //  }


    // union 
    // set_union(first.begin(),first.end(),sec.begin(),sec.end(),inserter(result,result.begin()));
    //  for(int a:result){
    //     cout<<a<<" ";
    //  }

    return 0;

 }