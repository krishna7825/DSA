#include<iostream>
using namespace std;
class Shape{
public:
     void draw(){
    cout<<"Generic Drawing ..."<<endl;
   }

};
class Circle:public Shape{
public:
       void draw () {
        cout<<"Circle Drawing ..."<<endl;
       }
};
class Rectangle:public Shape{
public:
       void draw (){
        cout<<"Rectangle Drawing ..."<<endl;
       }
};
class Triangle:public Shape{
public:
       void draw () {
        cout<<"Triangle Drawing ..."<<endl;
       }
};
void ShapeDrawing(Shape *s){
    s->draw(); // draw is polymorphic 
}
int main(){
   /*
    Circle c;
    Rectangle r;
     

    // Before using vitual there is a early binding held 
     // After using vitual there is a Late binding held 
    ShapeDrawing(&c);
    ShapeDrawing(&r );

    // Triangle *t = new Triangle();
    // ShapeDrawing(t);
    */


// //  Without virtual function 
//    Shape *s = new Shape();
//     s->draw();


//     // Upcasting 
//     Shape *s3  = new Circle();
//     s3->draw();

//     Circle *c = new Circle();
//     c->draw();

//     // DownCasting
//     Shape *s2 = new Shape();
//     Circle *c2 = (Circle *)s2;
//     c2->draw();


// with virtual function 
    Shape *s = new Shape();
    s->draw();


    // Upcasting 
    Shape *s3  = new Circle();
    s3->draw();

    Circle *c = new Circle();
    c->draw();

    // DownCasting
    Shape *s2 = new Shape();
    Circle *c2 = (Circle *)s2;
    c2->draw();


    return 0;
}