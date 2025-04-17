#include<iostream>
using namespace std;
void Ho_Half_Pyramid(int n){
  for(int i =0;i<n;i++){
        for(int j = 0;j<=i;j++){
    // First Approch
          if(i == 0||i ==1||i==n-1){
            cout<<"*";
          }
          else{
            if(j == 0 || j == i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
          }
        }
        cout<<endl;
     }
}
void Inverted_Ho_HalfPyramid(int n){
  for(int i =0;i<n;i++){
        for(int j = 0;j<n-i;j++){
    if(i ==0||i==n-1||j==0||i+j==n-1){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
        }
        cout<<endl;
     }
}
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    //Ho_Half_Pyramid(n);
    Inverted_Ho_HalfPyramid(n);
    return 0;
}