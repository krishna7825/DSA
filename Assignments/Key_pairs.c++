#include<iostream>
using namespace std;
void Key_Pairs(int arr[],int size){
    int count = 0;
    for(int i =0;i<size;i++){
        for(int j =0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    cout<<"No. of pairs "<<count;
}
int main(){
    int arr[]={1,2,3,4,5,2,3};
    int size = 7;
    Key_Pairs(arr,size);
    return 0;
}