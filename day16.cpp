#include <iostream>
using namespace std;

class Cycle{
    virtual void speed()=0;
    // virtual void chain()=0;
    // virtual void cover()=0;
};

class HeroHonda:public Cycle{

    public:
       
        void speed(){
            cout<<"The speed is: "<<45<<endl;
        }
};

int main()
{
    // Car c1;
    HeroHonda h1;
    h1.speed();
    return 0;
}