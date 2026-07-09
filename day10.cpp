#include <iostream>
using namespace std;

class Employee{

    public:
        // string name="Rohan";
        // int age=56;
        // float salary=45000;

        string name;
        int age;
        float salary;

        Employee(){}

        Employee(string name1,int age1,float salary1){
            name=name1;
            age=age1;
            salary=salary1;
        }


        void details(int num){
            cout<<"My name is: "<<name<<endl;
            cout<<"My age is: "<<age<<endl;
            cout<<"My salary is: "<<salary<<endl;
            cout<<"My num is: "<<num<<endl;
        }
        void details(Employee num){
            cout<<"My name is: "<<name<<endl;
            cout<<"My age is: "<<age<<endl;
            cout<<"My salary is: "<<salary<<endl;
            cout<<"My Name is: "<<num.name<<endl;
            cout<<"My Age is: "<<num.age<<endl;
        }

        void greet();
};

void Employee::greet(){
    cout<<"Hello Good Morning";
};

int main()
{
    
    // Employee e1=Employee();
    // cout<<e1.name<<endl;
    // cout<<e1.age<<endl;
    // cout<<e1.salary<<endl;

    // Employee e2=Employee();
    // e2.name="Suman";
    // e2.age=67;
    // e2.salary=58000;

    // cout<<e2.name<<endl;
    // cout<<e2.age<<endl;
    // cout<<e2.salary<<endl;
    // e1.details();

    // Employee e1=Employee("Rohan",78,34000);
    // e1.details();

    // Employee e2=Employee("Krish",18,38000);
    // e2.details();

    // Employee e3=Employee("Rohit",28,67000);
    // e3.details();

    // Employee e4=Employee();
    // e4.details();
    // e4.greet();

    // Employee arr[4];

    // arr[0]=Employee("Rohan",56,45000);
    // arr[1]=Employee("Krish",34,49000);
    // arr[2]=Employee("Rohit",36,67000);
    // arr[3]=Employee("Suman",26,69000);

    // cout<<arr[0].name<<endl;
    // cout<<arr[1].name<<endl;
    // cout<<arr[2].name<<endl;

    Employee e1=Employee("Rohan",78,45000);
    Employee e2=Employee("Suman",28,44000);
    // e1.details(56);
    e1.details(e2);

    return 0;
}