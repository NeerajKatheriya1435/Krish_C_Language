#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char arr[20]="Krish Gupta";
    // char arr[]="Krish Gupta Kumar";
    // char arr[45];

    // puts(arr);
    // cout<<arr<<endl;

    // char str2[20] = "Hello";
    // char strCopy[20];

    // char firstName[]="Rohan";
    // char lastName[]="Kumari";

    // cout<<strlen(str2)<<endl;
    // cout<<strlen(str2)<<endl;

    // strcpy(strCopy,str2);
    // cout<<strCopy<<endl;

    // strcat(firstName,lastName);
    // cout<<firstName<<endl;

    string str1="Krish";
    string str2="Gupta";

    // cout<<str1.length()<<endl;
    // cout<<str1.append(str2)<<endl;
    // cout<<str1.at(1)<<endl;
    // cout<<str1.empty()<<endl;
    // cout<<str1.replace(3,2,"you")<<endl;
    cout<<str1.erase(3,2)<<endl;

    return 0;
}