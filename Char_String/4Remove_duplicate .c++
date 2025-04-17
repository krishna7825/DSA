#include<iostream>
using namespace std;

// Remove duplicate element from adjacents ||

int main(){
    string name = "abbaca";
    string ans = "";
    
    for(int i = 0; i < name.length(); i++){
        char ch = name[i];
        if(ans.empty()){
            ans.push_back(ch);
        }
        else if(i > 0 && ch == ans.back()) {
            ans.pop_back();
        }
        else{
            ans.push_back(ch);
        }
    }
    
    cout << "String = " << ans << endl;
    
    return 0;
}