#include<iostream>
using namespace std;
void Two_sum(int arr[],int n,int target){
     ;
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(target == arr[i] + arr[j] ){
                cout<<"i = "<<i<<endl<<"j = "<<j;
            }
        }
    }
}
int main(){
    int arr[]={10,20,30};
    int n = 3;
    int target = 50;
    Two_sum(arr,n,target);
    return 0;
}