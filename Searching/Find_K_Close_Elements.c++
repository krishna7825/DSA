#include<iostream>
#include<vector>
using namespace std;
// leet code 658
void closest(vector<int>arr, int x , int k ){
        int l =0;
        int h = arr.size()-1;
        while(h-l>=k){
            if(x -arr[l]>arr[h]-x){
                l++;
            }
            else{
                h--;
            }

        }
        vector<int>ans;
        for(int i =l;i<=h;i++){
            ans.push_back(arr[i]);
        }
        for(int i =0;i<ans.size();i++){
            cout<< arr[i]<<" "<<endl;
        }

}
int main(){
   vector<int>arr{1,2,3,4,5};
   int x = 3;
   int k = 4;
   closest(arr,x,k);
    return 0;
}

#