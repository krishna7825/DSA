/* 
#include<iostream>
using namespace std ;
int main(){
    int p = 6;
    int &q = p;//Address dene ke liye jo ki p ke equal hai;
    q++;
    cout<<p<<endl;

    cout<<&p<<endl; // Ampersand used as output
    cout<<&q<<endl;
    
    return 0;
}
}*/
#include<iostream>
using namespace std ;
void changeValue(int &z, int &y){
    z =100;
    y =344;

}
int main(){
    int a =5;
    int b = 4;
    changeValue(a,b);
    cout<<a<<" "<<b;
    return 0;
    }