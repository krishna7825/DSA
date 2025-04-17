#include<iostream>
#include<vector>
using namespace std ;
int main(){ 
    int arr[4][4] = {{1,2,3,14},
                     {4,5,6,15},
                     {7,8,9,16},
                     {10,11,12,13}
                    };
    // // cout<<"Enter the 2 D Array :"<<endl;
    // // for(int i=0;i<4;i++){
    // //     for(int j = 0;j<3;j++){
    // //         cin>>arr[i][j];
    // //     }
    // // }
    int row = 4;
    int col = 4;

    cout<<"Print row wise :"<<endl;
    // Row wise print kiya hai 
    for(int i =0;i<row;i++){ // row wise traverse kiya hai
     for(int j=0;j<col;j++){  // colum wise travese kiya hai 
        cout<<arr[i][j]<<" ";
        }cout<<endl;  
    }
    // Colum wise print kiya hai
    cout<<"Print Colum wise :"<<endl;
    for(int i =0;i<col;i++){  // cloum wise traverse karo hai
        for(int j=0;j<row;j++){ // row wise traverse kiya hai 
        cout<<arr[j][i]<<" ";
        }cout<<endl;  
    }
    // Diagonal traversal row == colums 
    cout<<"Print the traversal wise :"<<endl;
    for(int i =0 ;i<row;i++){
        for(int j =0;j<col;j++){
            if(i == j ){
                cout<<arr[i][j]<<" ";
            }
        }
         cout<<endl;
    }

    //  Diagonal traversal row + colums == row
    cout<<"Print the traversal wise :"<<endl;
    int s =0;
    int e = row*col -1;
    int mid = s+(e-s)/2;
    int ans = mid/col;
    for(int i =0 ;i<=row;i++){
        for(int j =0;j<=col;j++){
            if(ans == i+j ){
                cout<<arr[i][j];
            }
        }
         cout<<endl;
    }

    return 0;
}