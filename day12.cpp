#include <iostream>
#include <string>
using namespace std;

class Employee{


public:

    string name;
    float salary;
    int age;

    // Employee(){}

    Employee(string name,int age,float salary=34000){
        cout<<"Normal Construr"<<endl;
        this->name=name;
        this->age=age;
        this->salary=salary;
    }

    Employee(const Employee &std){
        cout<<"Copy Constructor"<<endl;
        this->name=std.name;
        this->age=std.age;
        this->salary=std.salary;
    }

    ~Employee(){
        cout<<"Desctructor called"<<endl;
    }

};

int main()
{
    
    // Employee e1= Employee("Rohan",56,78000);
    // cout<<"My name is: "<<e1.name<<endl;
    // cout<<"My age is: "<<e1.age<<endl;
    // cout<<"My salary is: "<<e1.salary<<endl;

    // Employee e1= Employee("Rohan",56);
    // cout<<"My name is: "<<e1.name<<endl;
    // cout<<"My age is: "<<e1.age<<endl;
    // cout<<"My salary is: "<<e1.salary<<endl;

    // Employee e2= Employee();
    // Employee e2;
    // cout<<"My name is: "<<e2.name<<endl;
    // cout<<"My age is: "<<e2.age<<endl;
    // cout<<"My salary is: "<<e2.salary<<endl;

    Employee e1("Rohan",56,89000);
    cout<<"My name is: "<<e1.name<<endl;
    cout<<"My age is: "<<e1.age<<endl;
    cout<<"My salary is: "<<e1.salary<<endl;

    Employee e2(e1);

    cout<<"My name is: "<<e2.name<<endl;
    cout<<"My age is: "<<e2.age<<endl;
    cout<<"My salary is: "<<e2.salary<<endl;


    return 0;
}