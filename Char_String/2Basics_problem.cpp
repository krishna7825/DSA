#include<iostream>
#include<string.h>
using namespace std;
int get_length(char name[],int size){
    int index = 0;
   int count = 0;
//    cin>>name;
cin.getline(name,100);
   while(name[index] != '\0'){
    count++;
    index++;
   }
   return count;
}
void replace_char(char name[],int size){
    // My@name@is@krishna@yadav
    cout<<"Enter the string = "<<endl;
    cin>>name;
    char at = '@';
    char space = ' ';
    int i =0;
    for(int i =0;i<size;i++){
            if(name[i] == at){
            name[i] = space;
        }

    }
    
    cout<< name;

}
void Convertion_TO_upper(char name[],int size){
    int len = get_length(name,100);
    cout<<"Enter the string = "<<endl;
    cin>>name;
    for(int i =0;i<len;i++){
        char ch = name[i];
        //combination of upper and lower caser hai to
        if(ch>='a'&& ch<='z'){
            ch = ch - 'a'+'A'; 

        }
        name[i] = ch;

    }
    cout<<name;
}
void Convertion_TO_lower(char name[],int size){
    int len = get_length(name,100);
    cout<<"Enter the string = "<<endl;
    cin>>name;
    for(int i =0;i<len;i++){
        char ch = name[i];
        //combination of upper and lower caser hai to
        if(ch>='A'&& ch<='Z'){
            ch = ch - 'A'+'a'; 

        }
        name[i] = ch;

    }
    cout<<name;
}
void reverse_Char(char name[],int size){
    int len = get_length(name,100);
    int i =0;
    int j = len -1;
    while(i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
    cout<<name;
}
bool checkpalindrome(char name[],int size){
    int len = get_length(name,100);
    int i =0;
    int j = len -1;
    while(i<=j){
        if(name[i]==name[j]){
        i++;
        j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
   char name[100];
    // cout<<"Length = "<<get_length(name,100);
    replace_char(name,100);
    //Convertion_TO_upper(name,100);
    //Convertion_TO_lower(name,100);
    //reverse_Char(name,100);
    // int ans = checkpalindrome(name,100);
    // if(ans !=  1){
    //     cout<<"Not a Palindrome";
    // }
    // else{
    //     cout<<"Palindrome";
    // }
   
    return 0;
}
