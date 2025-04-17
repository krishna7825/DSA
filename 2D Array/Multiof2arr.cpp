#include<iostream>
using namespace std ;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m],ar[n][m],mul[n][m];
    cout<<"Enter the Array 1 =";
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the Array 2=";
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            mul[i][j]=0;
          for(int k =0;k<n;k++){
            mul[i][j]+=arr[i][k]*ar[k][j];
          }
        }
    }
    cout<<"mul of matrix ="<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<mul[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;
}