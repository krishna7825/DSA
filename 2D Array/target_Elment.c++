#include<iostream>
#include<vector>
using namespace std;
bool solve(int arr[][3],int rowSize , int colSize,int target ){
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
    int arr[3][3]= {10,20,30,40,50,60,70,80,90};
    int rowSize = 3;
    int colSize = 3;
    int target = 620;
    bool ans = solve(arr,rowSize,colSize,target);
    if(ans == true){
        cout<<"Found";
    }
    else{
        cout<<" Not Found";
    }
    
    return 0;
}