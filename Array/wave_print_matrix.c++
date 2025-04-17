#include<iostream>
#include<vector>
using namespace std;
int wave(vector<vector<int>>arr){
    int r = arr.size();
    int c = arr[0].size();
    for(int i =0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++ ){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=r-1;j>=0;j-- ){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}
int wave(vector<vector<int>>arr){

}
int main(){
    vector<vector<int>>arr{{1,2,3,4},
                           {5,6,7,8},
                           {9,10,11,12},
                           {13,14,15,16}
                          };
    wave(arr);
    return 0;
}
