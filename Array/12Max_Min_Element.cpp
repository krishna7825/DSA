#include<iostream>
using namespace std ;

void Max_Element(int arr[],int size){
    int Max = arr[0] ;
    for(int i =0;i<size;i++){
        if(Max < arr[i]){
            Max = arr[i];
        }
    }
    cout<<"Max_Element :"<<Max;

}
void Min_Element(int arr[],int size){
    int Min = arr[0];
    for(int i = 0;i<size;i++){
        if(Min > arr[i]){
            Min = arr[i];
        }
    }
    cout<<"Min_element :"<<Min; 
}

int main(){
   int arr[]={10,20,30,40,50};
   int size = 5;
  // Max_Element(arr,size);
   Min_Element(arr,size);
 


    return 0;
}