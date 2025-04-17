#include<iostream>
using namespace std ;
void Print_2DA(int arr[][3],int rowSize ,int colSize){
    for(int i =0;i<rowSize;i++){
      for(int j =0;j<colSize;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
 }
int main(){
    int arr[3][3] = {10,20,30,40,50,60,70,80,90};
    int rowSize = 3;
    int colSize = 3;
    Print_2DA(arr,rowSize,colSize);
    int transpose[3][3];
    for(int i =0;i<rowSize;i++){
        for(int j =0;j<colSize;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    cout<<"Transpose of matrix =>"<<endl;
    for(int i =0;i<rowSize;i++){
      for(int j =0;j<colSize;j++){
        cout<<transpose[i][j]<<" ";
      }
      cout<<endl;
    }
    // int n,m;
    // cin>>n>>m;
    // int arr[n][m], tran[n][m];
    // cout<<"Array =";
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<m;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<m;j++){
    //      tran[i][j]=arr[j][i];
    //     }
    // }
    // cout<<"transpose ="<<endl;
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<m;j++){
    //         cout<<tran[i][j]<<" ";
    //     }cout<<endl;
    // }

    
    return 0;
}