#include<iostream>
#include<vector>
using namespace std;
int main(){
         vector<int>arr{1,2,3,4,5,6,7};
         int sum =9;
         int count=0;
        for(int i =0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(sum == arr[i]+arr[j]){
                    cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                    // count++;
                }
            }
        }
    return 0;
}