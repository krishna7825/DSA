#include<iostream>
using namespace std;
void Diamond(int n){
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++)
         cout<<" ";
        
        for(int j =0;j<i+1;j++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<i;j++){
        cout<<" ";
       }
   
       for(int j =0;j<n-i;j++){
        cout<<"* ";
       }
       cout<<endl;

    }
}
void Hollow_Diamond(int n){
   // Upper Portion
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
         cout<<" ";
        }
        
        for(int j =0;j<i+1;j++){
            if(i ==0/*||i == n-1*/||j==0||j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    // Lower Portion
    for(int i =0;i<n;i++){
        for(int j =0;j<i;j++){
        cout<<" ";
       }
   
       for(int j =0;j<n-i;j++){
        if(/*i==0||*/j==0||i==n-1||j==n-i-1){
        cout<<"* ";
        }
        else{
            cout<<"  ";
        }
       }
       cout<<endl;

    }
}

int main(){
     int n;
    cout<<"Enter the number : ";
    cin>>n;
    //Diamond(n);
    Hollow_Diamond(n);
    return 0;
}