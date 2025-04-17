#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter th size of  array =";
    cin>>n;

 vector<int> v(n);
 for(int i =0;i<n;i++){
    int element;
    cin>>element;
   v.push_back(element);
 }

    return 0;
}