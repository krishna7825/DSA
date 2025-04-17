#include<iostream>
#include<vector>
using namespace std;
// Approch 1
int xorr(vector<int>& nums){
        int ans =0;
        for(int i =0;i<nums.size();i++){
            ans ^=nums[i];
            cout<<" Missing Number = " <<ans<<endl;

        }
        for(int i =0;i<=nums.size();i++){
            ans ^= i;
            cout<<" Missing Number = " <<ans<<endl;;
        }
        cout<<" Missing Number = " <<ans<<endl;   
}
// Approch 2
int sum(vector<int>& nums){
    int n = nums.size();
    int sum1 =0;
    int sum2 =0;
    for(int i =0;i<=n;i++){
        sum1=sum1+i;
        cout<<sum1<<endl;
    }
    for(int i =0;i<n;i++){
        sum2 = sum2 + nums[i];
        cout<<sum2<<endl;
    }
    int ans = sum1 -sum2;
    cout<<ans;
}
int main(){
    vector<int>nums{3,0,1};
    // xorr(nums);
    sum(nums);

    return 0;
}