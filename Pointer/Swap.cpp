#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y = temp;
}
int main(){
    int x = 10;
    int y = 20;
    int *p1=&x;
    int *p2=&y;
    swap(p1,p2);
    cout<<"x="<<x<<" "<<"y="<<y;
    return 0;
}