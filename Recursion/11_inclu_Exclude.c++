#include<iostream>
using namespace std;
void printSubsequences(string str ,int index,string output){
    // base case
    if( index == str.length()){
        cout<<output<<endl;
        return;
    }
    // 1 case khud solve karunga
    char ch = str[index];
    // cout<<output + ch<<endl;
    // include ch
    printSubsequences(str , index +1,output + ch);
    // exclude ch 
     printSubsequences(str , index +1,output);

}
int main(){
    string str = "abc";
    string output = "";
    int index =0;
    printSubsequences(str,index,output);
    return 0;
}