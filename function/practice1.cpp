#include<iostream>
using namespace std ;
int naturalSquare(int a){
        int square;
    for(int i = 1;i<=a;i++){
        square =  i*i;
        cout<<square<<endl;
    }
    return 0;
}
int main(){
    naturalSquare(5);
    return 0;
}