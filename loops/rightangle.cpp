#include<iostream>
using namespace std;
void RightTriangle(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}
void Inverted_Right_Triangle(int n){
    // First approch
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j>i;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
// Second approch
    // for(int i =1;i<=n;i++){
    //     for(int j=4;j>=i;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
// Third approch
for(int i = 0; i<n;i++){
    for(int j = 0;j<n - i;j++){
        cout<<"*";
    }
    cout<<endl;
}
}

int main (){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    //RightTriangle(n);
    Inverted_Right_Triangle(n);


    return 0;
}