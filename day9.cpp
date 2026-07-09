#include <iostream>
#include <cstring>
using namespace std;

class Human{

    public:
            string name="Rohan";
            int age=56;
            float salary=34000;

    Human(){
        name="Defaut";
        age=45;
        salary=56000;
    };

    Human(string name1,int age1,float salary1){
        name=name1;
        age=age1;
        salary=salary1;
    }

    

        void details(){
            cout<<"My name is: "<<name<<endl;
            cout<<"My age is: "<<age<<endl;
            cout<<"My salary is: "<<salary<<endl;
        }
};

int main()
{
    // Human h1=Human();
    // h1.details();

    // Human h2=Human();
    // h2.name="Krish";
    // h2.age=45;
    // h2.salary=78000;
    // h2.details();

    // Human h3=Human();
    // h3.name="Suman";
    // h3.age=35;
    // h3.salary=79000;
    // h3.details();

    // Human h4=Human("Rohan",78,78000);
    // h4.details();

    // Human h5=Human("Krish",18,73000);
    // h5.details();

    // Human h5=Human();
    // h5.details();
    
    return 0;
}