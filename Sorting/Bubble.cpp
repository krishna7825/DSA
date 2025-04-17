#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v){
    for(int i =0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//Increasing order sorting
void bubblesort_inc(vector<int> &v){
    int n = v.size();
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j] ,v[j+1]);
            }
        }
    }
}
//Decreasing order sorting
void bubblesort_dec(vector<int> &v){
    int n = v.size();
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(v[j]<v[j+1]){
                swap(v[j] ,v[j+1]);
            }
        }
    }
}
int main(){
    vector<int>v{0,-1,8,2,1};
    bubblesort_inc(v);
    print(v);
    bubblesort_dec(v);
    print(v);

    return 0;
}