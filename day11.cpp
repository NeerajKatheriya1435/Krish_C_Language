#include <iostream>
using namespace std;

// class Employee
// {
//     private:
//         string name;
//         int age;
//     public:

//         Employee(string name1,int age1){
//             name=name1;
//             age=age1;
//         }

//         void details(){
//             cout<<"My name is: "<<name<<endl;
//             cout<<"My age is: "<<age<<endl;
//         }

//         friend void greet(Employee e1);

// };

// void greet(Employee e1){
//     cout<<"Good Morning Sir/Mam "<<e1.name<<endl;
// }

// class B;

// class A
// {
//     int x;

// public:
//     A(int a) { x = a; }
//     friend void add(A, B); // friend function
//     friend void mul(A); // friend function
// };

// class B
// {
//     int y;

// public:
//     B(int b) { y = b; }
//     friend void add(A, B); // friend function

//     friend void div(B); // friend function
// };

// void add(A obj1, B obj2)
// {
//     cout << "Sum = " << obj1.x + obj2.y << endl;
// }

class A
{
    int secret;

public:
    A(int s) { secret = s; }
    friend class B; // B is friend of A
};

class B
{
public:
    void showSecret(A obj)
    {
        cout << "Secret = " << obj.secret << endl;
    }
};

int main()
{

    // Employee e1=Employee("Rohan",78);
    // e1.details();
    // greet(e1);
    // // greet("Suman");

    // A obj1 = A(5);
    // B obj2 = B(3);

    // add(obj1, obj2);

    // A a1=A(67);
    // B b1=B();
    // b1.showSecret(a1);

    return 0;
}