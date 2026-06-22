#include <stdio.h>
#include <stdlib.h>

#define AddNum(a,b) (a+b)

// int *fun()
// {
//     int x = 5;
//     return &x; // Dangling pointer
// }

int main()
{

    int b=AddNum(4,7);
    printf("The sum is: %d\n",b);
    // char ch='<';
    // int a=8;

    // void* ptr;
    // ptr=&a;

    // int a = 78;
    // int *ptr = NULL;
    // ptr = &a;
    // printf("The address in ptr: %d\n", ptr);
    // printf("The address in ptr: %d\n", *ptr);

    // int* f1=fun();

    // int*prt2;
    // free(ptr);
    // printf("The address in ptr: %d",ptr);

    return 0;
}
