#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int *ptr = arr;
    cout<<"*ptr ="<<*ptr<<endl;
    cout<<"arr ="<<arr<<endl;
    cout<<"arr +1 ="<<arr +1<<endl;
    cout<<"arr +2 ="<<arr +2<<endl;
    cout<<"arr +3 ="<<arr +3<<endl;
    cout<<"arr +1 ="<<*(arr +1)<<endl;
    cout<<"arr +2 ="<<*(arr +2)<<endl;
    cout<<"arr +3 ="<<*(arr +3)<<endl;

    
    return 0;
}