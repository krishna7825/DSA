#include<iostream>
//#include<algorithm>
#include<climits>
using namespace std;
int solve(int arr[][3],int rowSize , int colSize ){
    int maxValue  = INT_MIN;
    for(int i =0;i<rowSize;i++){ // row wise traverse kiya hai
     for(int j=0;j<colSize;j++){ 
        maxValue =  max(arr[i][j],maxValue);
         
        }  
    }
    return maxValue;
}
int main(){
    int arr[3][3]= {{10,20,30},
                    {4,50,60},
                    {70,850,90}};
    int rowSize = 3;
    int colSize = 3;

    int  ans = solve(arr,rowSize,colSize);
    cout<<"Answer = "<<ans;
    
    return 0;
}