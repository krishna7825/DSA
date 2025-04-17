#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30); 
    first.push_back(40);

    list<int>sec;
    
    sec.push_back(100);
    sec.push_back(200);
    sec.push_back(300);
    sec.push_back(400);
    sec.push_front(5);
    first.swap(sec);
    cout<<"After Removing"<<endl;
    list<int>::iterator it2 = first.begin();
    while (it2 != first.end())
    {
        cout<<*it2<<" ";
        it2++;
    }




    // Mylist.push_back(10);
    // Mylist.push_back(20);
    // Mylist.push_back(30);
    // Mylist.push_back(40);
    // Mylist.push_front(100);
    //  Mylist.push_back(20);
    // cout<<Mylist.size()<<endl;



    // cout<<Mylist.front()<<endl;
    // cout<<Mylist.back()<<endl;
    
    // cout<<"Before Removing"<<endl;
    // list<int>::iterator it = Mylist.begin();
    // while (it != Mylist.end())
    // {
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;

    // Mylist.remove(20);

    // cout<<"After Removing"<<endl;
    // list<int>::iterator it2 = Mylist.begin();
    // while (it2 != Mylist.end())
    // {
    //     cout<<*it2<<" ";
    //     it2++;
    // }
    




    // Mylist.pop_back();
    // cout<<Mylist.size()<<endl;
    // Mylist.pop_front();
    // cout<<Mylist.size()<<endl;
    // Mylist.clear();
    // cout<<Mylist.size()<<endl;
    // if(Mylist.empty() == true ){
    //     cout<<"List is empty"<<endl;
    // }
    // else{
    //     cout<<"List is not empty"<<endl;
    // }




    return 0;
}