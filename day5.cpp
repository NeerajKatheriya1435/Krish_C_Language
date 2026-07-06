#include <iostream>
using namespace std;

// inline int add(int a, int b=6 , int c=7) {
//     return a + b + c;
// }

// void counter()
// {
//     static int count = 0; // static variable
//     cout << "Function called " << count << " times" << endl;
//     count++;
// }

// void counter(const int num)
// {
//     // num=67;
//     // int count = 0; // static variable
//     cout << "Function called " << num << " times" << endl;
//     // count++;
// }

int b=8;

void counter(int num)
{
    b=67;
    cout << "Function called " << num << " times" << endl;
 
}

int main()
{
    // cout<<"The sum is: "<<add(4,8,2)<<endl;
    // cout<<"The sum is: "<<add(4,8)<<endl;
    // cout<<"The sum is: "<<add(4,8,3)<<endl;
    // cout<<"The sum is: "<<add(4)<<endl;

    // cout<<"The sum is: "<<add(3,2,1)<<endl;

    // counter(5);
    // counter();
    // counter();
    // counter();
    // const int a=7;
    // a=5;
    // cout<<a;
    counter(5);
    cout<<b;
    return 0;
}