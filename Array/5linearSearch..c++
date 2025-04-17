#include<iostream>
using namespace std;
bool find_Target(int arr[],int size, int target){
    for(int i =0;i<size;i++){
        if(target == arr[i]){
           return true;
        }

    }
    return false;
    //cout<<"Not Found";
  
}
int main(){
    int arr[]={2,5,6,8,9,7};
    int size = 6;
    int target =77;
    bool ans = find_Target(arr,size,target);
    cout<<"Ans :"<<ans;

   
    return 0;
}