#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>one;
    vector<int>sec;
    one.push_back(10);
    one.push_back(20);
    one.push_back(30);
    one.push_back(40);

    sec.push_back(100);
    sec.push_back(200);
    sec.push_back(300);
    sec.push_back(400);

    one.swap(sec);
    // for loop
    // for(int i =0;i<one.size();i++){
    //     cout<<one[i]<<" ";
    // }

    // for each loop
    for(int i:one){
        cout<<i<<" ";
    }

    for(int i:sec){
        cout<<i<<" ";
    }


    // Creation
    //vector<int>marks;
    //cout<<marks.max_size()<<endl;// usede for maximun number of size



    //marks.reserve(10);// used for define the capacity of vector inside in it 
    //cout<<*(marks.begin())<<endl;// marks.begin() -> only give the loction //  *(marks.begin()) -> it will return value where it stores
    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.push_back(50);
    //marks.clear();//used to delete all the element of vector 
    //marks.insert(marks.begin(),60);



    // cout<<"Size = "<<marks.size()<<endl;
    // marks.erase(marks.begin(),marks.end());
    // cout<<"Size = "<<marks.size()<<endl;


    //cout<<marks[0]<<endl;
    // marks[0] = 80;
    // cout<<marks[0]<<endl;
    //cout<<marks.at(0)<<endl;
    //cout<<marks.capacity()<<endl;

    //marks.pop_back();
    // cout<<"Size = "<<marks.size()<<endl;
    // cout<<marks.front()<<endl;
    // cout<<marks.back()<<endl;

    // if(marks.empty()==true){
    //     cout<<"Vector is empty "<<endl;
    // }
    // else{
    //     cout<<"Vector is not empty"<<endl;
    // }
    // cout<<"Capacity = "<<marks.capacity();
    

    // vector<int>miles(10);

    // vector<int>distance(15,0);

    return 0;
}

