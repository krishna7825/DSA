#include<iostream>
using namespace std ;
class Student{
    // Attribute
public:
    int id;
    int age;
    string name;
    int nos;

    // Defalut contructor 
    Student(){
        cout<< " Studing is a Defalut contructor "<<endl;
    }

    // Parameterised contructor
    Student(int id, int age,string name,int nos){
        cout<<" Studying is a Defalut contructor"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }

    // Copy COnstructor 
    Student(const Student &srcobj) //srcobj  =>A
    {
        cout<<" Studying is a Copy contructor"<<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }


    // Behaviour / Method / Fuction
    void study(){
        cout<<this->name<<" Studing"<<endl;
    }
    void sleep(){
        cout<<this->name<<" sleeping"<<endl;
    }
    void bunk(){
        cout<<this->name<<" bunking"<<endl;
    }

    // Deconstructor 
    ~Student(){
        cout<< " Studing is a  Decontructor "<<endl;
    }
};
int main (){
    // Student A;
    // A.id = 1;
    // A.age = 90;
    // A.name = "krishna";
    // A.nos = 56;
    // cout<<A.name<<endl;
    // Student A(1,45,"krishna",7); // Stack me store ho rhi hai 
    // Student B(2,15,"Ankit",5);
    // Student C(3,25,"Abhisek",7);

    // // cout<<A.id <<" "<<A.name<<endl;
    // // cout<<B.id <<" "<<B.name<<endl;
    // // cout<<C.id <<" "<<C.name<<endl;

    // A.bunk();
    // B.sleep();

    // // Copy constructor 
    // Student C = A;

    // cout<<C.name<<" "<<C.age<<endl;


    // Dynamic Allocation 
    Student *A = new Student(1,45,"krishna",7);
    cout<<A->name<<endl;
    cout<<A->age<<endl;
    delete A;
    

    return 0;
}