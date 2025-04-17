#include<iostream>
#include<vector>
using namespace std;
int Move_Negative(vector<int>arr){
    int n = arr.size();
    int s =0;
    int e = n-1;
    for(int i =0;i<n;i++){   

        if(arr[s]<0){
            s++;
        }
        else if(arr[e]>0){
            e--;
        }
        else{
           swap(arr[s],arr[e]);
        }
        cout<<"s = "<<arr[s]<<" "<<" e = "<<arr[e]<<endl;
    }
    for(int i:arr){
        cout<<i<<" ";
    }

}
int main(){
    vector<int>arr{1,2,-3,4,-5,6};
    Move_Negative(arr);
    return 0;
}