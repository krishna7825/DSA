#include<iostream>
using namespace std ;
class Student{
   
public:
    // Attribute
    int id;
    int age;
    string name;
    int nos;

private:
    float *gpa;
    string gf;

public:
    void setgpa(float a){
        *this->gpa = a;
    }
    float getgpa()const
    {
        return *this->gpa;
    }
    float getage()const
    {
        return this->age;
    }
    //  Constructor is in public member
    // Defalut contructor 
    Student(){
        cout<< " Studing is a Defalut contructor "<<endl;
    }

    // Parameterised contructor
    Student(int id, int age,string name,int nos,float gpa,string gf){
        cout<<" Studying is a Defalut contructor"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
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

private:
void gfChat(){
    cout<< " chatting with girlfriend "<<endl;

}
};
int main (){
    Student A(1,45,"krishna",4,7.8,"Prachi");
    // cout<<A.name<<endl;
    //  cout<<A.gf<<endl; // we can not access it is due to it is defined in private section
    cout<<A.getgpa()<<endl;
    A.setgpa(6.7);
    cout<<A.getgpa()<<endl;

    cout<<A.getage()<<endl;

    

    return 0;
}