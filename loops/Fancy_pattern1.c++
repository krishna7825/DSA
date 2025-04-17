#include<iostream>
using namespace std;
void Pattern_1(int n){
    for(int i =0;i<n;i++){
        for(int j=1;j<2*n-i-1;j++){
            cout<<"*";
        }
        for(int j =0;j<=i;j++){
            cout<<i+1<<"*";
        }
         for(int j=2;j<2*n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void Pattern_2(int n){
    for(int i =0;i<n;i++){
        int x =1;
        for(int j=0;j<2*i+1;j++){
            if(j%2==!0){
                cout<<"*";
            }
            else{
                cout<<x;
                x++;
            }

        }
        cout<<endl;
    }
}
int main(){
    int n ; 
    cout<<"Enter the number : ";
    cin>>n;
    //Pattern_1(n);
    Pattern_2(n);
   
    return 0;
}