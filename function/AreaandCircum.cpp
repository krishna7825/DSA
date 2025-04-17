#include<iostream>
using namespace std ;
void circle(float x){
    float area,circum;
    float pi = 3.14;
    area = (pi*x*x);
    circum = (2*pi*x);
    cout<<area<<endl<<circum;


}
int main(){
    int r;
    cin>>r;
    circle(r);
    return 0;
}