#include<iostream>
using namespace std;
class vehicals {
// private:
protected:
         string name;
         string model;
         int noOfTyres;
      //  string getName(){
      //   return this->name;
      //  }
       
public:// Constructor 
       vehicals( string _name,string _model,int _noOfTyres){
        cout<<" I am inside vehical ctor"<<endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
       }
public:  
      void start_Engine(){
        cout<< "Engine is starting"<<endl;
      }
      void stop_Engine(){
        cout<< "Engine is stopping"<<endl;
      }
      ~vehicals(){
        cout<<"vehicals is deconstructor"<<endl;

      }
};
class Car: public vehicals{
protected:
       int noOfDoors;
       string transmissionType;
public: // Constructor 
       Car(string _name,string _model,int _noOfTyres,int _noOfDoors,string _transmissionType):vehicals(_name,_model,_noOfTyres){
           cout<<" I am inside Car ctor"<<endl;
           this->noOfDoors = _noOfDoors;
           this->transmissionType  = _transmissionType;
       }
       void stratAC(){
        // cout<<" AC has started of "<<getName() <<endl;
        cout<<" AC has started of "<<name <<endl;
       }
       ~Car(){
        cout<<" Car is deconstructor" <<endl;
       }
};
class MotorCar: public vehicals{
protected:
         string handlestyle;
         string suspentionType;
public:
        // constructor 
         MotorCar(string _name,string _model,int _noOfTyres ,string _handlestyle,string _suspentionType):vehicals(_name,_model,_noOfTyres){
          cout<<"I am inside the MotorCar ctor"<<endl;
          this->handlestyle = _handlestyle;
          this->suspentionType = _suspentionType;
         }
         void wheelie(){
          cout<<" Wheelie  done by the this motorcar -> "<<name <<endl;
         }
         ~MotorCar(){
          cout<<" Motorcar is deconstructor"<<endl;
         }
};
int main(){
  //  Car A ("Maruti 800","LXI",4,4,"Mannual");
  //  A.start_Engine();
  //  A.stratAC();
  //  A.stop_Engine();
   

   MotorCar M("Mercedies","lecshes",4,"Right","Threshold Frequency ");
   M.start_Engine();
   M.wheelie();
   M.stop_Engine();


   /*Note ->
   Deconstructor Phele drived class ka call hoga the base class ka 
   lekin during inheritace pehle base class ka constructor ans ushki properties pehele execute hogi
   then deroved class ki  */


/*Base Class  -> protected
     Derived Class -> public
   to derive class me inherit tom ho jaye gi but main class
   se access nhi kar payege */ 
  //  cout<<A.name<<endl;

    return 0;
}