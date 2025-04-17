#include<iostream>
using namespace std;
void Pyramid(int n){
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++)
         cout<<" ";
        
        for(int j =0;j<i+1;j++)
            cout<<"* ";
        cout<<endl;
        
    }
}
void Inverted_Pyramid(int n){
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
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    Pyramid(n);
    //Inverted_Pyramid(n);
    return 0;
}