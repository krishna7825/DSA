#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // creation
    char name[15];
     // Input
    cout<<" Enter the sting = ";
    cin>>name;// it does take input after the space we use another 
    // cin.getline(name,10,'t');

    // output
    cout<<"Your name is = ";
    cout<<name<<endl;
    cout<<name[0] <<"->"<<(int)name[0]<<endl;
    cout<<name[1] <<"->"<<(int)name[1]<<endl;
    cout<<name[2] <<"->"<<(int)name[2]<<endl;
    cout<<name[6] <<"->"<<(int)name[6]<<endl;
    return 0;
}
