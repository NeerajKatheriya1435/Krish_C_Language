#include <iostream>
using namespace std;


class Human{

public:

string name;
int age;

    // Human(string name,int age){
    //     this->name=name;
    //     this->age=age;
    //     cout<<"First Constructor"<<endl;
    // }

    Human(string name,int age):name(name),age(age){
        cout<<"Constructor called"<<endl;
    }
    void run(){
        cout<<"Huamn can run"<<endl;
    }

    void laugh(){
        cout<<"Human can laugh"<<endl;
    }
};

class Employee : public Human{

public:
    int salary;
    Employee(string name,int age,int salary):Human(name,age){
        this->salary=salary;
        cout<<"Second Constructor"<<endl;
    }

    void sleep(){
        cout<<"Human can laugh"<<endl;
    }
};

int main()
{
    
    Employee e1("Rohan",78,56000);
    e1.sleep();
    return 0;
}