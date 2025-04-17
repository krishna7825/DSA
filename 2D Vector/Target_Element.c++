#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<vector<int>> arr,int target ){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i =0;i<rowSize;i++){ // row wise traverse kiya hai
     for(int j=0;j<colSize;j++){ 
         if(arr[i][j]== target){
         return true;
         }
        }  
    }
    return false;
}
int main(){
    vector<vector<int> >arr (4 ,vector<int>(3));
    for(int i =0 ;i<arr.size();i++){
        for(int j =0;j<arr[i].size();j++){
            cin>>arr[i][j];
        }
    }
    int target = 6;
    bool ans = solve(arr,target);
    if(ans == true){
        cout<<"Found";
    }
    else{
        cout<<" Not Found";
    }
    
    return 0;
}