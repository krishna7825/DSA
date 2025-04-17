#include<iostream>
#include<vector>
using namespace std;

int main(){
         int n,m;
         cout<<"Enter the value"<<endl;
         cin>>n>>m;
         cout<<"Enter the first Array"<<endl;
         vector<int>arr(n);
         for(int i =0;i<arr.size();i++){
            cin>>arr[i];
         }
         cout<<"Enter the sec Array"<<endl;
         vector<int>brr(m);
         for(int i =0;i<brr.size();i++){
            cin>>brr[i];
         }
         vector<int>crr;
         for(int i =0;i<arr.size();i++){
            crr.push_back(arr[i]);
         }
         for(int i =0;i<brr.size();i++){
            crr.push_back(brr[i]);
         }
         cout<<"union of array"<<endl;
         for(int i =0;i<crr.size();i++){
            cout<<crr[i]<<" ";
         }

    return 0;
}