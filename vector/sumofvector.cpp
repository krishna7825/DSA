#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter th size of vec =";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element first vec =";
    for(int i = 0;i<5;i++){
        cin>>v[i];
    }
    cout<<"Enter the  element sec vec =";
    vector<int> ve(n);
    for(int i = 0;i<5;i++){
        cin>>ve[i];
    }
     vector<int> arr(n);   
    for(int i =0;i<n;i++){
         arr[i] = ve[i]+v[i];
     }
    cout<<"Output of arr =";
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}