#include<iostream>
using namespace std;
void Half_Mix_Pyramid(int n){
for(int i =0;i<n;i++){
        for(int j =0;j<n-1;j++){
            cout<<"*";
        }
        for(int j =0;j<2*i+1;j++){
            cout<<" ";
        }
        for(int j =0;j<n-1;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}
void Full_Mix_Pyramid(int n){
    // Upper portion
    for(int i =0;i<n;i++){
        for(int j =i;j<n-1;j++){
            cout<<"*";
        }
        for(int j =0;j<2*i+1;j++){
            cout<<" ";
        }
        for(int j =i;j<n-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower Portion
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<"*";
        }
        for(int j =0;j<(2*(n-i))-3;j++){
            cout<<" ";
        }
        for(int j =0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n ; 
    cout<<"Enter the number : ";
    cin>>n;
    //Half_Mix_Pyramid(n);
    Full_Mix_Pyramid(n);
    return 0;
}