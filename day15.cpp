#include <iostream>
using namespace std;

// class Human{

//     public:
//     string name;

//     Human(string name){
//         this->name=name;
//     }

//     void greet(){
//         cout<<"Good Morning"<<name<<endl;
//     }

//     int add(int num1,int num2){
//         // cout<<"Good Morning"<<name<<endl;
//         return num1+num2;
//     }

//     int add(int num1,int num2,int num3){
//         // cout<<"Good Morning"<<name<<endl;
//         return num1+num2+num3;
//     }
// };

// class Point
// {

// public:
//     int x, y;
//     Point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }

//     // Point operator+(Point p)
//     // {
//     //     return Point(x - p.x, y - p.y);
//     // }
// };

class Base
{
public:
    virtual void show()
    { // virtual function
        cout << "Base class function" << endl;
    }
};


class Derived : public Base
{
public:
    void show()
    { // overrides base class function
        cout << "Derived class function" << endl;
    }
};


int main()
{

    // Base* b; // base class pointer
    // Derived d;
    // b = &d;
    // b->show();

    // Base b1=Base();
    // b1.show();

    // Derived b1=Derived();
    // b1.show();

    // Base b1=Derived();
    // b1.show();
    // Human h1;
    // h1.greet();

    // Human h1=Human();
    // h1.greet();

    // int a=8;
    // int*b =&a;
    // Human *h2=&h1;
    // h2->greet();

    // **h2.greet();

    // h2->greet();

    // Human std[3];
    // std[0].name1="Rohan";
    // std[1].name1="Seeta";
    // std[2].name1="Raghav";

    // std[0].greet();
    // std[1].greet();
    // std[2].greet();

    // Human h1("Rohan");
    // cout<<h1.name<<endl;
    // cout<<h1.add(4,7)<<endl;
    // cout<<h1.add(4,7,8);

    // Point p1(5,7);
    // Point p2(4,2);

    // Point p3=p1+p2;

    // cout<<p3.x<<endl;
    // cout<<p3.y<<endl;
    return 0;
}