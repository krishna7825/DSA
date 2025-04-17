#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{15,25,35,45,55,};
    vector<int>brr{10,20,30,40,50,60};
    vector<int>arr;
    int n = v.size();
    int m = brr.size();
    int i =0;
    int j =0;
    int x = m+n;
    while(i<v.size()&& j< brr.size()){
        if(v[i]>brr[j]){
            arr.push_back(brr[j]);
            j++;
        }
        else{
            arr.push_back(v[i]);
            i++;
        }
    }
    while(i<v.size()){
        arr.push_back(v[i]);
        i++;
    }
    while(j<brr.size()){
        arr.push_back(brr[j]);
        j++;
    }
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}