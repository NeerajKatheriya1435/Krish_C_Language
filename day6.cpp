#include <iostream>
using namespace std;

int a=7;

void hello(){
    // b=56;
    // int c=7;
    int a=78;
    cout<<a<<endl;
    // cout<<c<<endl;
}

int main()
{
    {
        int d=7;
        cout<<d<<endl;
    }
    int b=5;
    hello();
    cout<<a<<endl;
    // cout<<d<<endl;

    // cout<<c<<endl;

    return 0;
}