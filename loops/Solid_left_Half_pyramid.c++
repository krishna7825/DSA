#include<iostream>
using namespace std;
void Solid(int n){
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        }
        for(int i =0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n ; 
    cout<<"Enter the number : ";
    cin>>n;
    Solid(n);
    return 0;
}