#include<iostream>
#include<vector>
using namespace std;
int binaryseach(int arr[][4],int rows,int cols,int target){
    int s = 0;
    int e = rows*cols -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        int rowsindex = mid / cols;
        int colsInedx= mid % cols;
        int element = arr[rowsindex][colsInedx];
        if(arr[rowsindex][colsInedx] == target ){
            return arr[rowsindex][colsInedx];  
        }
        else if(arr[rowsindex][colsInedx] < target){
             s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int main(){
    int arr[5][4]={{1,2,2,4},{5,6,7,8},{9,10,11,12,},{13,14,15,16},{17,18,19,20}};
     int rows = 5;
     int cols = 4;
     int target = 5;
     int  indexOfTarget = binaryseach(arr,rows,cols,target);
      if(indexOfTarget == -1){
        cout<<"Not Found"<<endl;
      }
      else{
        cout<<"found ";
      }
    return 0;
}