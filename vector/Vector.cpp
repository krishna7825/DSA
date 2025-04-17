#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> v(5);
    for(int i =0;i< v.size();i++){
        int element;
         cin>>element;
         v.push_back(element);
    }
    for (int i = 0; i < v.size(); i++) {
        // Printing the element at
        // index 'i' of vector
        cout << v[i]<<" ";
    }
    cout << endl;
    return 0;
}