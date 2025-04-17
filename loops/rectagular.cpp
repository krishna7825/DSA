#include<iostream>
using namespace std;
void Rectangle(int n){
    for(int i =0;i<=3;i++){
    for(int j =0;j<=5;j++){
     cout<<"*";
    }
    cout<<endl;
   }

}
void Hollow_Rectangle(int n){
    for(int i =0;i<5;i++){
        for(int j = 0;j<7;j++){
            if(i==0||j==0||i==4||j==6){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }   
}
int  main (){
   int n ;
   cout<<"Enter the number : ";
   cin>>n;
   //Rectangle(n);
    Hollow_Rectangle(n);

    return 0;
}