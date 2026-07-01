
#include <iostream>
using namespace std;

// void greet(int &a){
//     a=9;
//     cout<<"Good Morning"<<endl;
// }

int add(int a, int b)
{ 
    return a + b;
}

int add(int a, int b,int c)
{ 
    return a + b+c;
}
// double add(double a, double b)
// { 
//     cout<<"The sum is: ";
//     return a + b;
// }

int main()
{
    int a = 7;
    // a=6;
    // greet(a);
    // greet(a);
    // cout<<a<<endl;

    // cout<<add(4,6)<<endl;
    // cout<<add(4.6,6.4)<<endl;
    // cout<<add(4,4,3)<<endl;
    // cout<<add(4,4,3,2)<<endl;
    return 0;
}