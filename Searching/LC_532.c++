#include <iostream>
#include<vector>
using namespace std;
void pairs (vector<int>nums,int n ,int k){
     
        int i =0;
        int j = nums.size()-1;
        int count =0;
        while(i<j){
            if(nums[i]-nums[j]==k){
               count++;
            }
            else{
                i++;
                j--;

            }
        }  
      cout<< count<<endl;;
    
}
int main() {
    vector<int>nums{1,1,3,4,5};
    int n = nums.size();
    int k =2;
    pairs(nums,n,k);
    
   
    return 0;
}

