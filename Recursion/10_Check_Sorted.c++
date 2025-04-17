#include<iostream>
using namespace std;
bool CheckSorted(int arr[],int size,int index){
    // Base condition
    if(size==index){
        return true;
    }
    int currans = false;
    int reccans = false;
     if(arr[index]<arr[index+1]){
        currans = true ;
    }
    
    bool ans = CheckSorted(arr,size,index+1);
    if(currans == ans){
    return true;
    }
    else{
    return false;
    }
   
    

}
int main(){
    int arr[]={1,3,4,5,8,9,10,15};
    int size=8;
    int index = 0;
    bool ans =CheckSorted(arr,size,index);
    if(ans ==1){
        cout<<"Sorted hai"<<endl;
    }
    else{
        cout<<"Not Sorted hai"<<endl;
    }
    return 0;
}