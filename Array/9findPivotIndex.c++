#include<iostream>
#include<vector>
using namespace std;
int pivotIndex_1(vector<int>&arr){
    int n = arr.size();
    cout<<"Size = "<<n<<endl;
    vector<int>lsum(n,0);
    vector<int>rsum(n,0);
    //cal. lsum array
    for(int i =1;i<n;i++){
        lsum[i] = lsum[i-1] + arr[i-1];
        cout<<"lsum = "<<lsum[i] <<" "<<"i = "<<i<<endl;
    }
    //cal. rsum array
    for(int i =n-2;i>=0;i--){
        rsum[i] = rsum[i+1] + arr[i+1];
        cout<<"rsum = "<<rsum[i]<<" "<<"i = "<<i<<endl;
    }
    // check krte hai
    for(int i =0;i<n;++i){
        if(lsum[i] == rsum[i]) {
            return i;
        }
    }
    return -1;
}
int pivotIndex_2(vector<int>&arr) {
    int n = arr.size();
    for(int i =0;i<arr.size();i++){
    int Lsum=0;
    int Rsum=0;
        // left sum
        for(int j=0;j<i;j++){
            Lsum = Lsum + arr[j];
            cout<<"Lsum = "<<Lsum<<endl;
        }
        // right sum    
        for(int j=i+1;j<n;j++){
            Rsum = Rsum + arr[j];
            cout<<"Rsum = "<<Rsum<<endl;
        }
        if(Rsum == Lsum){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr{1,7,3,6,5,6};
    int Pivot_Index = pivotIndex_2(arr);
    if(Pivot_Index !=0){
        cout<<"Pivot Index = "<<Pivot_Index<<endl;
    }
    else{
        cout<<"Pivot index Not Found"<<endl;
    }
    return 0;
}