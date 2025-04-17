#include<iostream>
using namespace std ;
class emplyoee{
protected:
       int empId;
       string name;
public:
       emplyoee(int _empId,string _name){
        this->empId = _empId;
        this->name = _name;
       }
       void display(){
        cout<<"Emplyoee Name = "<<name<<", EmpId = "<<empId<<endl;
       }
};
// Derived from single inheritence 
class Devloper : public emplyoee{
public:
      string prolang ;
      Devloper(int _empId,string _name ,string _prolang):emplyoee( _empId, _name){
        this->prolang = _prolang;
      }

      void show(){
        cout<<"Proogramming Language = "<<prolang<<endl;
      }
    
}
;
    
int main (){
    Devloper D(123,"krishna","c++");
    D.display();
    D.show();
    return 0;
}