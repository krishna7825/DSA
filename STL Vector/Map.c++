#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    // creation
    unordered_map<string , string>table;

    // insertion
    //1 Method
    table["in"] = "india";
    //2 Method
    table.insert(make_pair("en","England"));

    // 3 Method  
    pair<string,string>p;
    p.first = "br";
    p.second = "brazil";
    table.insert(p);

     
   
    cout<<table.size()<<endl;
    // table.clear();
    //cout<<table.size()<<endl;

    // Empty 
    if(table.empty()== true){
        cout<<"Table is  empty"<<endl;
    }
    else{
        cout<<" Table in not empty"<<endl;
    }

    cout<<table.at("in")<<endl;
    table.at("in") = "india 1";
    cout<<table.at("in") <<endl;

    cout<<table.size()<<endl;


    // unordered_map<string,string>::iterator it = table.begin();
    // while (it != table.end())
    // {
    //    pair<string,string>p = *it;
    //    cout<<p.first << " "<<p.second<<endl;
    //    it++;
    // }
    
    

    // // important function in c++
    // if(table.find("in") !=table.end()){
    //     cout<<"Key Found"<<endl;
    // }
    // else{
    //    cout<< "Key not found"<<endl;
    // }
    //  // count fuction in c++
     if(table.count("in") == 0){
        cout<<"Key not found"<<endl;
     }
     if(table.count("in") == 1){
        cout<<"Key not found"<<endl;
     }
     


    return 0;
}
