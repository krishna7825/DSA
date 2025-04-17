#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){ 
        unordered_set<int>st;
        st.insert(10);
        st.insert(50);
        st.insert(30);
        st.insert(90);

    //     // find function
    //      if(st.find(10) !=st.end()){
    //     cout<<"Key Found"<<endl;
    //     }
    //     else{
    //      cout<< "Key not found"<<endl;
    //    }

       // count
        if(st.count(70) == 0){
        cout<<"Key not found"<<endl;
        }
        if(st.count(70) == 1){
        cout<<"Key not found"<<endl;
        }
     

        // unordered_set<int>::iterator it = st.begin();
        // while (it !=st.end()){
        //     cout<<*it<<endl;
        //     it++;
        // }
        // cout<<st.size()<<endl;
        // cout<<st.clear()<<endl;
        // cout<<st.size()<<endl;

        
    return 0;

}