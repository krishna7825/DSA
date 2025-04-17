#include<iostream>
#include<vector>
#include<limits.h>
using namespace std ;
int main(){
    vector<int>nums1{1,9,3};
    vector<int>nums2{4,7,6};
    int n = nums1.size();
    int m = nums2.size();
    
    for(int i = 0;i<m;i++){
          nums1[n+i].push_back(nums2[i]);
        }
     for(int i =0;i<m+n;i++){
            cout<<nums1[i];
        }
        for(int i =0;i<m+n;i++){
            for(int j=i+1;j<m+n;j++){
                if(nums1[i]>=nums1[j]){
                    swap(nums1[i],nums2[j]);
                }
            }
        }
    for(int i =0;i<m+n;i++){
            cout<<nums1[i];
    }
    return 0;
}