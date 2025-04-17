#include<iostream>
#include<vector>
using namespace std;
int main (){
  // Creation 3 types
  vector<int>arr;
  // arr.reserve(10);
  // cout<<arr.capacity()<<endl;
  // cout<<arr.max_size()<<endl;


  
 
 // Push_back()
  arr.push_back(10);
  arr.push_back(20);
  arr.push_back(30);
  arr.push_back(40);
  arr.push_back(50);
  arr.push_back(60);
  arr.push_back(70);

  // // Begin()
  // cout<<*(arr.begin())<<endl;

  // // end()
  // cout<<*(arr.end()-1)<<endl;

  // // Start
  // cout<<arr.size()<<endl;

  // // front()
  // cout<<arr.front()<<endl;

  // // pop_back()
  // //arr.pop_back();

  // // back()
  // cout<<arr.back()<<endl;

  // //Empty()
  // if(arr.empty() == true){
  //   cout<<"Vector is empty"<<endl;
  // }
  // else{
  //   cout<<"Vector is not empty"<<endl;
  // }

  // //at()
  // cout<<arr[5]<<endl;
  // cout<<arr.at(5)<<endl;

  // //capacity
  // cout<<arr.capacity()<<endl;
  // cout<<arr.size()<<endl;

  // clear
  cout<<arr.capacity()<<endl;
  cout<<arr.size()<<endl;
  cout<<arr.clear()<<endl;
  cout<<arr.size()<<endl;


  

    return 0;
} 