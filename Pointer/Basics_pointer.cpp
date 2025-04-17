#include<iostream>
using namespace std;
int main(){
    // int a =5;
    // int *b = &a; 
    // cout<<sizeof(b)<<endl;

    // char ch = 'a';
    // char *cptr = &ch;
    // cout<<sizeof(cptr)<<endl;

    // long l = 1040;
    // long *lptr = &l;
    //  cout<<sizeof(lptr)<<endl;

    // int *ptr;
    // cout<<*ptr<<endl;

    // char array pointer 
    char ch[100] ="Babbar";
    char *cptr = ch;

    cout<<"ch ="<<ch<<endl;
    cout<<"&ch ="<<&ch<<endl;
    cout<<"ch[0] ="<<ch[0]<<endl;
    cout<<"&cptr ="<<&cptr<<endl;
    cout<<"*cptr ="<<*cptr<<endl;
    cout<<"*(cptr +3) ="<<*(cptr+3)<<endl;
    // Note point
    cout<<"cptr ="<<cptr<<endl;
    return 0;
}      