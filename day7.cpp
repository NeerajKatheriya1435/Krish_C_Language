#include <iostream>
using namespace std;

// int fact(int num){
//     if (num<=1){
//         return 1;
//     }
//     return num*fact(num-1);
// }

// int funcA(int num);
// int funcB(int num);

// int funcA(int num){
//     if (num<=1){
//         return 1;
//     }
//     return num+funcB(num-1);
// }

// int funcB(int num){
//     return num+funcA(num-2);
// }

int fibonacci(int n)
{
    if (n == 0)
        return 0; // base case
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
}

int main()
{
    // int var1=fact(7);
    // cout<<"The Factorial is: "<<var1<<endl;
    // cout << "The value is: " << funcA(5);
    // cout << "The value is: " << fibonacci(3);


    int arr1[3][3];

    int arr2[3][3];

    int arr3[3][3];

    int inp1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter the value at ("<<i<<","<<j<<") Position"<<endl;
            cin>>inp1;
            arr1[i][j]=inp1;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // arr3[i][j]=arr1[i][j]+arr2[i][j];
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter the value at ("<<i<<","<<j<<") Position"<<endl;
            cin>>inp1;
            arr2[i][j]=inp1;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // arr3[i][j]=arr1[i][j]+arr2[i][j];
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}