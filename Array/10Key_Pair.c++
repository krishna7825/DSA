#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// find the pairs in array which is equal to target
bool sum(vector<int>& arr, int target){
        int s =0;
        int e = arr.size()-1;
        int csum = 0;
        while(s<e){
            csum = arr[s] + arr[e];
            if(csum == target){
                return true;
            }
            else if(csum > target){
                e--;
            }
            else{
                s++;
            }
            cout<<"s = "<<arr[s]<<" "<<"e = "<<arr[e]<<endl;
        }
        return false;
    }
int main(){
    vector<int>arr{1,4,45,6,10,8};
    int target = 16;
        sort(arr.begin(),arr.end());
        bool ans = sum( arr, target);
        if(ans ==1){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
        
    return 0;
};

