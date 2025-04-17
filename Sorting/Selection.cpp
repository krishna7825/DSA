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
void selectionsort_inc(vector<int> &v){
    int n = v.size();
    for(int i =0;i<n-1;i++){
        int min_index = i;
        for(int j = i+1 ;j<n ;j++){
            
            if(v[j]<v[min_index]){
                min_index = j;
            }
            swap(v[i],v[min_index]);            
        }
    }
}
int main(){
    vector<int>v{44,33,55,22,11};
    selectionsort_inc(v);
    print(v);
    // selectionsort_dec(v);
    // print(v);

    return 0;
}